using UnityEngine;
using System.Collections;

public class Spawn : MonoBehaviour {
	
	// prefab that will be spawned
	public GameObject zombiePrefab;
	
	// spawn delay
	public float interval = 2f;
	
	// Use this for initialization
	void Start () {
		InvokeRepeating("SpawnNext", interval, interval);
	}
	
	void SpawnNext() {
		if(TowersAvailableManager.towersAvailable < 2){
			Instantiate(zombiePrefab, transform.position, Quaternion.identity);
		}
	}
	
	
}
