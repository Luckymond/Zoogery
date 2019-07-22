import cv2
import os
import pydicom
import pydicom as dicom
import matplotlib.pyplot as plt
import numpy as np
import scipy.misc

filesDCM = []
#Choose source path and destination path
#dicom_folder_path = "D:/Zoorgery/DICOMs/Test_Sets/CT/11/DICOM_anon/"
dicom_folder_path = "D:/Zoorgery/DICOMs/Test_Sets/MR/11/T2SPIR/DICOM_anon"
image_folder_path = "D:/Zoorgery/JPGs/"
#browse through all files in one folder
for dirName, subdirList, fileList in os.walk(dicom_folder_path):
    for filename in fileList:
        if ".dcm" in filename.lower():
            filesDCM.append(os.path.join(dirName, filename))

i = 0
for filenameDCM in filesDCM:
    ds = dicom.read_file(filenameDCM)
    # get the image data as nparray
    imageData = ds.pixel_array

    def translate(value,rescale_slope,rescale_intercept):
        return (value*rescale_slope)+rescale_intercept

    def int12_to_int8(DicomImage, rescale_slope,rescale_intercept):
        img_array = []
        for eachRow in DicomImage:
            for eachPix in eachRow:
                img_array.append(translate(eachPix,rescale_slope,rescale_intercept))
        img_array = np.array(img_array)
        img_array = img_array.reshape(256,256) # size: CT: 512, MR:256
        return img_array

    def get_LUT_value(data, window, level):

        return np.piecewise(data,[data <= (level - 0.5 - (window-1)/2),data > (level - 0.5 + (window-1)/2)],
                [0, 255, lambda data: ((data - (level - 0.5))/(window-1) + 0.5)*(255-0)])


    #imageConverted = int12_to_int8(imageData, 1, -1024)

    level=250   #suggestions: CT: 900, MR: 250-300 or check the related DICOM Tag
    window=700 #suggestions: CT: 1500, MR: 700-800 or check the related DICOM Tag

    scaled_img=get_LUT_value(imageData, window, level)

    scaled_img = cv2.convertScaleAbs(scaled_img)
    #cv2.imshow('image',scaled_img)

    #upsample image to (1024, 1024) for Unity application
    upsampled_image = scipy.misc.imresize(scaled_img, (1024, 1024))
    #save images in destination folder
    cv2.imwrite(str(image_folder_path) + "slice" + str(i) + ".jpg",upsampled_image)
    i += 1
    cv2.waitKey(0)



