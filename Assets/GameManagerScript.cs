using UnityEngine;
using System.Collections;

public class GameManagerScript : MonoBehaviour {


	public static bool playerIsDead;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
		if(playerIsDead == true){
			Time.timeScale = 0.0f;
		}
	}
}
