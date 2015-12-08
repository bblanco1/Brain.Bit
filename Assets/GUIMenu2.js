

function OnGUI() {


GUI.Box(Rect(Screen.width /2 - 200,Screen.height /2 - 100,250,200), "Game Menu");		

		
		
		if(GUI.Button(Rect(Screen.width /2 - 200,Screen.height /2 - 50,250,50), "Play")){
			Application.LoadLevel("DemoKit");
		}
		
		
			if(GUI.Button(Rect(Screen.width /2 - 200,Screen.height /2 ,250,55), "Help	")){
			    Application.LoadLevel("help");
		}	    
			if (GUI.Button (Rect (Screen.width /2 - 200,Screen.height /2 + 50,250,55), "Quit")){
			Application.Quit();
		}
	}