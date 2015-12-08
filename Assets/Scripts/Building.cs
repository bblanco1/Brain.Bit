using UnityEngine;
using System.Collections;

public class Building : MonoBehaviour {
	
	bool squareIsOccupied;
	AudioSource audioSource;
	
	// Type of tower that should be built
	public GameObject towerPrefab;
	
	void Awake()
	{
		audioSource = GetComponent<AudioSource>();
		squareIsOccupied = false;
		
	}
	
	void OnMouseUpAsButton() {
		//Build Stuff
		if(TowersAvailableManager.towersAvailable > 0) {
		
		Build();
		
		} else {
		
			Debug.Log ("You ain't go no dang old towers to build!");
		}
	}
	
	void Build()
	{
	
		if(squareIsOccupied == false){
			GameObject wooodenTower = (GameObject)Instantiate(towerPrefab);
			wooodenTower.transform.position = transform.position + Vector3.up;
			audioSource.Play();
			squareIsOccupied = true;
			TowersAvailableManager.towersAvailable--;
			
		} else {
			Debug.Log("hey gooby");
		}
	
	
	}
}