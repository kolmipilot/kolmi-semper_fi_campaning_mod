enableSaving [ false, false ];
cutText ["", "BLACK FADED", 69];
enableEnvironment false;
showCinemaBorder false;


while {true} do
{
	diag_log "[kolmimenu.VR initIntro] starting video playback loop";
	_video = ["\z\kolmiSFCM\addons\mainmenu\kolmimenu.vr\wynikHigh.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
	diag_log "[kolmimenu.VR initIntro] video finished (scriptDone)";
	sleep 1;
};
