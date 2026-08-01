class cfgAmmo {
	class G_40mm_HE;
	// Visual grenade attached to drone - no auto-fuse, just a model
	class G_40mm_Drone_Visual: G_40mm_HE {
		model = "\A3\Weapons_f\ammo\Handgrenade";
		indirectHit = 0;
		indirectHitRange = 0;
	};
	// Explosive grenade dropped from drone - has time fuse like hand grenade
	class GrenadeHand;
	class G_40mm_Drone: GrenadeHand {
		model = "\A3\Weapons_f\ammo\Handgrenade";
		indirectHit = 11;
		indirectHitRange = 9;
		fuseDistance = 0;
		timeToLive = 6;
	};
};
