using UnityEngine;
using System.Collections;

public class ZombieHealth : MonoBehaviour {

	public bool isAlive;
	public int health; 

	TextMesh tm;

	
	// Use this for initialization
	void Start () {
		isAlive = true;
		health = 8;
		tm = GetComponent<TextMesh>();
	}
	
	// Update is called once per frame
	/* void Update () {
		// Faces the camera
		transform.forward = Camera.main.transform.forward;
	}
	*/

	// Decrease the current Health by removing one
	public void decreaseHealth() {
		if (health > 1) {
			tm.text = tm.text.Remove (tm.text.Length - 1);
			health = health - 1;
		} else {
			Death ();
		}
	}

	void Death()
	{
		isAlive = false;
		Destroy(transform.parent.gameObject);
		ScoreManager.score += 1;
	}
}
