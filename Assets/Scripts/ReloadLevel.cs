using UnityEngine;
using System.Collections;

public class ReloadLevel : MonoBehaviour {

	public void ReloadGame()
	{

		Application.LoadLevel (1);

	}

	public void ReturnToMenu()
	{

		Application.LoadLevel (0);

	}

}