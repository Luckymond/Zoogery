//Merlin: Create a highscore table manually, tables can be saved in a json and loaded for future sessions

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HighscoreTable : MonoBehaviour
{
	private Transform entryContainer;
	private Transform entryTemplate;
	private List<HighscoreEntry> highscoreEntryList;
	private List<Transform> highscoreEntryTransformList;
		
    // Awake is called before the first frame update
    private void Awake()
    {
        entryContainer = transform.Find("highscoreEntryContainer");
		entryTemplate = entryContainer.Find("highscoreEntryTemplate");
		
		entryTemplate.gameObject.SetActive(false);
		
		highscoreEntryList = new List<HighscoreEntry>(){
			new HighscoreEntry{score = 9.99f, name = "Dr. Fastgott"},
			new HighscoreEntry{score = 1.00f, name = "Leo"},
			new HighscoreEntry{score = 1.00f, name = "Julia"},
			new HighscoreEntry{score = 1.00f, name = "Merlin"},
			new HighscoreEntry{score = 1.00f, name = "Nikolaus"},
			new HighscoreEntry{score = 8.05f, name = "Monkey"},
		};
		//Sort List highest to lowest
		for(int i = 0; i < highscoreEntryList.Count; i++){
			for(int j = i + 1; j < highscoreEntryList.Count; j++){
				if(highscoreEntryList[j].score > highscoreEntryList[i].score){
					//Swap elements
					HighscoreEntry tmp = highscoreEntryList[i];
					highscoreEntryList[i] = highscoreEntryList[j];
					highscoreEntryList[j] = tmp;
				}
			}
		}
		
		
		highscoreEntryTransformList = new List<Transform>();
		foreach(HighscoreEntry highscoreEntry in highscoreEntryList){
			CreateHighscoreEntryTransform(highscoreEntry, entryContainer, highscoreEntryTransformList);
		}
    }
	//Method to add a new player
	//private void AddHighscoreEntry(float score, string name){
	//	HighscoreEntry highscoreEntry = new HighscoreEntry{score = score, name = name};
	//}
	
	private void CreateHighscoreEntryTransform(HighscoreEntry highscoreEntry, Transform container, List<Transform> transformList){
		//Enter rank, score and name into the highscoreEntryContainer
		float templateHeight = 50f;
		Transform entryTransform = Instantiate(entryTemplate, container);
		RectTransform entryRectTransform = entryTransform.GetComponent<RectTransform>();
		entryRectTransform.anchoredPosition = new Vector2(0, -templateHeight*transformList.Count);
		entryTransform.gameObject.SetActive(true);
		
		int rank = transformList.Count + 1;
		string rankString;
		switch(rank){
		default:
			 rankString = rank + "TH"; break;
		case 1: rankString = "1ST"; break;
		case 2: rankString = "2ND"; break;
		case 3: rankString = "3RD"; break;			 
		}
		entryTransform.Find("posText").GetComponent<Text>().text = rankString;
		float score = highscoreEntry.score;
		entryTransform.Find("scoreText").GetComponent<Text>().text = score.ToString("f2");
		string name = highscoreEntry.name;
		entryTransform.Find("nameTxt").GetComponent<Text>().text = name;
		
		entryTransform.Find("background").gameObject.SetActive(rank%2 == 1);
		
		if(rank == 1){
			entryTransform.Find("posText").GetComponent<Text>().color = Color.green;
			entryTransform.Find("scoreText").GetComponent<Text>().color = Color.green;
			entryTransform.Find("nameTxt").GetComponent<Text>().color = Color.green;
		}
		
		transformList.Add(entryTransform);
	}
	
	// class to store player attributes
	private class HighscoreEntry {
		public float score;
		public string name;
	}
}
