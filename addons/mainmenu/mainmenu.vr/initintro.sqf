enableSaving [ false, false ];
cutText ["", "BLACK FADED", 69];
enableEnvironment false;
showCinemaBorder false;


while {true} do
{
	_video = ["\z\kolmiSFCM\addons\mainmenu\mainmenu.vr\YuukaStaresAtYou.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};