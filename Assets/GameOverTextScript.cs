using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameOverTextScript : MonoBehaviour {

	Text text;
	Color uiColorBlank = Color.clear;
	Color uiColorNormal = Color.white;

	// Use this for initialization
	void Awake()
	{
		text = GetComponent<Text>();
		
		text.color = uiColorBlank;
		
	}
	
	// Update is called once per frame
	void Update () {
		
		Debug.Log(FenceHealth.health);
		if(GameManagerScript.playerIsDead) {
			
			Debug.Log ("You ded");
			text.color = uiColorNormal;
		}
	
	}
}
