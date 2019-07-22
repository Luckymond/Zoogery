using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
public class Shoot : MonoBehaviour
{
    static Transform projectileSpawn;
    public GameObject spawnFromGameObject;
    public GameObject projectile;
    public float nextFire = 1.0f;
    public float currentTime = 0.0f;
    // Start is called before the first frame update
    void Start()
    {
        projectileSpawn = spawnFromGameObject.transform;
    }

    // Update is called once per frame
    void Update()
    {
        shoot();
    }

    public void shoot()
    {
        currentTime += Time.deltaTime;
        bool button = CrossPlatformInputManager.GetButton("ShootButton");
        //Debug.Log(button);
        if (button && currentTime > nextFire)
        {
            nextFire += currentTime;
            Instantiate(projectile, projectileSpawn);// Quaternion.FromToRotation(Vector3.right, transform.right));
            nextFire -= currentTime;
            currentTime = 0.0f;
        }
    }
}