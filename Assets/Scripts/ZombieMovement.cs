using UnityEngine;
using System.Collections;

public class ZombieMovement : MonoBehaviour {

	public bool bothAlive;
	
	NavMeshAgent navMeshAgent;
	Transform player;

	void Awake () {


	}

	// Use this for initialization
	void Start () {

		// find player object and its location
		player = GameObject.FindGameObjectWithTag ("Player").transform;
		navMeshAgent = GetComponent<NavMeshAgent>();
	}

	// Update is called once per frame
	void Update () {

		// check if both enemy and player are still alive
		if(bothAlive)
		{
			// seek and destroy the player
			navMeshAgent.SetDestination(player.position);
			Debug.Log("Seek and Destroy " + navMeshAgent.destination);
		}
		else
		{
			// if not, then disable the nav mesh agent
			navMeshAgent.enabled = false;
			Debug.Log("Not Seeking and Destroying");
		}

	}
}
