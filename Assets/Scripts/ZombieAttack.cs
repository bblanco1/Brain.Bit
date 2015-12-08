using UnityEngine;
using System.Collections;

public class ZombieAttack : MonoBehaviour {
	
	GameObject player;
	Animator animator;
	bool playerInRange;
	
	// Use this for initialization
	void Awake () 
	{
		player = GameObject.FindGameObjectWithTag ("Player");
		animator = GetComponent<Animator> ();
	}
	
	void OnTriggerEnter (Collider other) 
	{
		if (other.gameObject == player) 
		{
			playerInRange = true;
			other.GetComponentInChildren<FenceHealth>().decreaseHealth();
			//Destroy(gameObject);
		}
	}
	
	void OnTriggerExit (Collider other) 
	{
		if (other.gameObject == player) 
		{    
			playerInRange = false;
		}
	}
	
	// Update is called once per frame
	void Update () 
	{
		if (playerInRange) {
			animator.SetBool ("isAttacking", true);
			
		} else {
			animator.SetBool ("isAttacking", false);
		}
		
	}
	
}