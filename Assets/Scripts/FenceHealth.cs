using UnityEngine;
using System.Collections;

public class FenceHealth : MonoBehaviour {
	
	public bool isAlive;
	public static int health; 
	
	AudioSource audioSource;
	TextMesh tm;
	
	
	// Use this for initialization
	void Start () {
		isAlive = true;
		GameManagerScript.playerIsDead = false;
		health = 8;
		tm = GetComponent<TextMesh>();
		audioSource = GetComponent<AudioSource> ();
	}
	
	// Decrease the current Health by removing one
	public void decreaseHealth() {
		if (health > 1) {
			tm.text = tm.text.Remove (tm.text.Length - 1);
			health = health - 1;
			audioSource.Play();
		} else {
			Death ();
		}
	}
	
	void Death()
	{
		isAlive = false;
		GameManagerScript.playerIsDead = true;
		Destroy(transform.parent.gameObject);
		
	}
}