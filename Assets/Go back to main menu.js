GetComponent.<Renderer>().material.color = Color.white; var isQuitButton = false; var isPlay = false; var isLoad = false;

function OnMouseEnter() {

//Change the color of the text
 
GetComponent.<Renderer>().material.color = Color.blue;
 
//PlayAudio
GetComponent(AudioSource).enabled = true;
}

function OnMouseExit() {

//Change the color of the text back
 
GetComponent.<Renderer>().material.color = Color.white;
 
//KillAudio
GetComponent(AudioSource).enabled = false;
}

function OnMouseUp() {
if( isQuitButton ) {

    //quit the game
    Application.Quit();
 
}
else
    if( isPlay )
{
 
    //load level
    Application.LoadLevel(1);
 
}
        if( isLoad )
{
 
    //load level
    Application.LoadLevel(1);
 
}
}