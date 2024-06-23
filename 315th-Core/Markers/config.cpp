class CfgPatches
{
	class plp_containers
	{
		requiredAddons[]=
		{
			"A3_Data_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMarkerClasses
{
	class 315th_Markers
	{
		displayName="315th Map Markers";
	};
};
class CfgMarkers
{
	class marker_dot2
	{
		name="Dot";
		icon="315th-Core\Data\Markers\dot.paa";
		color[]={0,0,0,1};
		size=35;
		scope=2;
		scopeCurator=2;
		shadow=0;
		markerClass="315th_Markers";
	};
	class marker_poi2: marker_dot2
	{
		name="POI";
		icon="315th-Core\Data\Markers\poi.paa";
		texture="315th-Core\Data\Markers\poi.paa";
	};
	class marker_lz: marker_dot2
	{
		name="LZ";
		icon="315th-Core\Data\Markers\lz.paa";
		texture="315th-Core\Data\Markers\lz.paa";
	};
	class marker_dz: marker_dot2
	{
		name="DZ";
		icon="315th-Core\Data\Markers\dz.paa";
		texture="315th-Core\Data\Markers\dz.paa";
	};
	class marker_destroy: marker_dot2
	{
		name="Destroy";
		icon="315th-Core\Data\Markers\destroy.paa";
		texture="315th-Core\Data\Markers\destroy.paa";
	};
	class marker_obj: marker_dot2
	{
		name="OBJ";
		icon="315th-Core\Data\Markers\obj.paa";
		texture="315th-Core\Data\Markers\obj.paa";
	};
	class marker_flag: marker_dot2
	{
		name="Flag";
		icon="315th-Core\Data\Markers\flag.paa";
		texture="315th-Core\Data\Markers\flag.paa";
	};
	class marker_rp: marker_dot2
	{
		name="Rally";
		icon="315th-Core\Data\Markers\rp.paa";
		texture="315th-Core\Data\Markers\rp.paa";
	};
	class marker_arrow: marker_dot2
	{
		name="Arrow";
		icon="315th-Core\Data\Markers\arrow.paa";
		texture="315th-Core\Data\Markers\arrow.paa";
	};
	class marker_marker: marker_dot2
	{
		name="Marker";
		icon="315th-Core\Data\Markers\marker.paa";
		texture="315th-Core\Data\Markers\marker.paa";
	};
	class marker_ambush: marker_dot2
	{
		name="Overwatch";
		icon="315th-Core\Data\Markers\ambush.paa";
		texture="315th-Core\Data\Markers\ambush.paa";
	};
	class marker_question: marker_dot2
	{
		name="Search";
		icon="315th-Core\Data\Markers\question.paa";
		texture="315th-Core\Data\Markers\question.paa";
	};
	class marker_exclamation: marker_dot2
	{
		name="Warning";
		icon="315th-Core\Data\Markers\exclamation.paa";
		texture="315th-Core\Data\Markers\exclamation.paa";
	};
	class marker_start: marker_dot2
	{
		name="Start";
		icon="315th-Core\Data\Markers\start.paa";
		texture="315th-Core\Data\Markers\start.paa";
	};
	class marker_end: marker_dot2
	{
		name="End";
		icon="315th-Core\Data\Markers\end.paa";
		texture="315th-Core\Data\Markers\end.paa";
	};
	class marker_ordnance: marker_dot2
	{
		name="Ordnance";
		icon="315th-Core\Data\Markers\ordnance.paa";
		texture="315th-Core\Data\Markers\ordnance.paa";
	};
	class marker_plain: marker_dot2
	{
		name="Unknown";
		icon="315th-Core\Data\Markers\plain.paa";
		texture="315th-Core\Data\Markers\plain.paa";
	};
	class marker_inf: marker_dot2
	{
		name="Infantry";
		icon="315th-Core\Data\Markers\inf.paa";
		texture="315th-Core\Data\Markers\inf.paa";
	};
	class marker_hinf: marker_dot2
	{
		name="Heavy Infantry";
		icon="315th-Core\Data\Markers\hinf.paa";
		texture="315th-Core\Data\Markers\hinf.paa";
	};
	class marker_motor: marker_dot2
	{
		name="Motorized";
		icon="315th-Core\Data\Markers\motor.paa";
		texture="315th-Core\Data\Markers\motor.paa";
	};
	class marker_mech: marker_dot2
	{
		name="Mechanized";
		icon="315th-Core\Data\Markers\mech.paa";
		texture="315th-Core\Data\Markers\mech.paa";
	};
	class marker_armor: marker_dot2
	{
		name="Armored";
		icon="315th-Core\Data\Markers\armor.paa";
		texture="315th-Core\Data\Markers\armor.paa";
	};
	class marker_recon2: marker_dot2
	{
		name="Recon";
		icon="315th-Core\Data\Markers\recon2.paa";
		texture="315th-Core\Data\Markers\recon2.paa";
	};
	class marker_heli: marker_dot2
	{
		name="Helicopter";
		icon="315th-Core\Data\Markers\heli.paa";
		texture="315th-Core\Data\Markers\heli.paa";
	};
	class marker_plane: marker_dot2
	{
		name="Plane";
		icon="315th-Core\Data\Markers\plane.paa";
		texture="315th-Core\Data\Markers\plane.paa";
	};
	class marker_boat: marker_dot2
	{
		name="Naval";
		icon="315th-Core\Data\Markers\boat.paa";
		texture="315th-Core\Data\Markers\boat.paa";
	};
	class marker_med: marker_dot2
	{
		name="Medical";
		icon="315th-Core\Data\Markers\med.paa";
		texture="315th-Core\Data\Markers\med.paa";
	};
	class marker_arty: marker_dot2
	{
		name="Artillery";
		icon="315th-Core\Data\Markers\arty.paa";
		texture="315th-Core\Data\Markers\arty.paa";
	};
	class marker_mortar: marker_dot2
	{
		name="Mortar";
		icon="315th-Core\Data\Markers\mortar.paa";
		texture="315th-Core\Data\Markers\mortar.paa";
	};
	class marker_hq2: marker_dot2
	{
		name="HQ";
		icon="315th-Core\Data\Markers\hq2.paa";
		texture="315th-Core\Data\Markers\hq2.paa";
	};
	class marker_support: marker_dot2
	{
		name="Support";
		icon="315th-Core\Data\Markers\support.paa";
		texture="315th-Core\Data\Markers\support.paa";
	};
	class marker_maint: marker_dot2
	{
		name="Maintenance";
		icon="315th-Core\Data\Markers\maint.paa";
		texture="315th-Core\Data\Markers\maint.paa";
	};
	class marker_service: marker_dot2
	{
		name="Service";
		icon="315th-Core\Data\Markers\service.paa";
		texture="315th-Core\Data\Markers\service.paa";
	};
	class marker_aa: marker_dot2
	{
		name="Anti-Air";
		icon="315th-Core\Data\Markers\aa.paa";
		texture="315th-Core\Data\Markers\aa.paa";
	};
	class marker_at: marker_dot2
	{
		name="Anti-Tank";
		icon="315th-Core\Data\Markers\at.paa";
		texture="315th-Core\Data\Markers\at.paa";
	};
	class marker_1_12: marker_dot2
	{
		name="1-1 Marker";
		icon="315th-Core\Data\Markers\1-1.paa";
		texture="315th-Core\Data\Markers\1-1.paa";
	};
	class marker_1_22: marker_dot2
	{
		name="1-2 Marker";
		icon="315th-Core\Data\Markers\1-2.paa";
		texture="315th-Core\Data\Markers\1-2.paa";
	};
	class marker_1_32: marker_dot2
	{
		name="1-3 Marker";
		icon="315th-Core\Data\Markers\1-3.paa";
		texture="315th-Core\Data\Markers\1-3.paa";
	};
	class marker_1_42: marker_dot2
	{
		name="1-4 Marker";
		icon="315th-Core\Data\Markers\1-4.paa";
		texture="315th-Core\Data\Markers\1-4.paa";
	};
	class marker_2_12: marker_dot2
	{
		name="2-1 Marker";
		icon="315th-Core\Data\Markers\2-1.paa";
		texture="315th-Core\Data\Markers\2-1.paa";
	};
	class marker_2_22: marker_dot2
	{
		name="2-2 Marker";
		icon="315th-Core\Data\Markers\2-2.paa";
		texture="315th-Core\Data\Markers\2-2.paa";
	};
	class marker_2_32: marker_dot2
	{
		name="2-3 Marker";
		icon="315th-Core\Data\Markers\2-3.paa";
		texture="315th-Core\Data\Markers\2-3.paa";
	};
	class marker_2_42: marker_dot2
	{
		name="2-4 Marker";
		icon="315th-Core\Data\Markers\2-4.paa";
		texture="315th-Core\Data\Markers\2-4.paa";
	};
	class marker_3_12: marker_dot2
	{
		name="3-1 Marker";
		icon="315th-Core\Data\Markers\3-1.paa";
		texture="315th-Core\Data\Markers\3-1.paa";
	};
	class marker_3_22: marker_dot2
	{
		name="3-2 Marker";
		icon="315th-Core\Data\Markers\3-2.paa";
		texture="315th-Core\Data\Markers\3-2.paa";
	};
	class marker_3_32: marker_dot2
	{
		name="3-3 Marker";
		icon="315th-Core\Data\Markers\3-3.paa";
		texture="315th-Core\Data\Markers\3-3.paa";
	};
	class marker_4_12: marker_dot2
	{
		name="4-1 Marker";
		icon="315th-Core\Data\Markers\4-1.paa";
		texture="315th-Core\Data\Markers\4-1.paa";
	};
	class marker_4_22: marker_dot2
	{
		name="4-2 Marker";
		icon="315th-Core\Data\Markers\4-2.paa";
		texture="315th-Core\Data\Markers\4-2.paa";
	};
	class marker_cmd2: marker_dot2
	{
		name="CMD Marker";
		icon="315th-Core\Data\Markers\cmd.paa";
		texture="315th-Core\Data\Markers\cmd.paa";
	};
	class marker_hq3: marker_dot2
	{
		name="HQ Marker";
		icon="315th-Core\Data\Markers\hq.paa";
		texture="315th-Core\Data\Markers\hq.paa";
	};
	class marker_recon3: marker_dot2
	{
		name="Recon Marker";
		icon="315th-Core\Data\Markers\recon.paa";
		texture="315th-Core\Data\Markers\recon.paa";
	};
};
class cfgMods
{
	author="315th Aux Team";
	timepacked="1652735951";
};
