//Marker color above the head
fnc_color = {
private ["_unit","_he","_b","_ha","_l","_color"];
_unit = _this select 0;

_he = _unit getHitPointDamage "HitHead";//head
_b = _unit getHitPointDamage "HitBody";//body
_ha =_unit getHitPointDamage "HitHands";//Arms
_l = _unit getHitPointDamage "HitLegs";//Legs

//[r, g, b, a] - Color format. R-red, g-green, b-blue. Values from 0 to 1.- alpha channel. (0 -valued, 1-opaque)
_color = [0,1,0,1];
   //green
    if(((_he) == 0) || ((_b) == 0) || ((_ha) == 0) || ((_l) == 0)) then  
    {
	   _color set [0,0];
	   _color set [1,1];
	   _color set [2,0];
	   _color set [3,1];
	   //[0.08,0.99,0,1]
	};
    //pink	
    if(((_he) >0.1) || ((_b) >0.1) || ((_ha) >0.1) || ((_l) >0.1)) then  
    {
	  _color set [0,1];
	  _color set [1,0.5];
	  _color set [2,0.5];
	  _color set [3,1];
	  //[0.99,0.85,0.13,1]-Orange
	  //[1,0.5,0.5,1]-pink
	};
	//red
    if(((_b) >0.6) || ((_ha) >0.6) || ((_l) >0.6)) then  
    {
	  _color set [0,1];
	  _color set [1,0];
	  _color set [2,0];
	  _color set [3,1];
	  //[1,0,0,1]
	};
	//紫色
	if(side _x != side player) then
	{
		_color set [0,1];
		_color set [1,0];
		_color set [2,1];
		_color set [3,1];
	};
_color	
};

addMissionEventHandler 
["Draw3D",
	{
		{
		
		    if(player != _x && (_x getVariable ['FAR_isUnconscious',0] == 0)) then 
		    {
			    if(_x distance player < 300) then
			    {
				    if((((vehicle _x)!=_x)&&(_x==effectiveCommander (vehicle _x)))||((vehicle _x)==_x)) then
				    {
 				        drawIcon3D 
					    [
						  "",
                            //Colour
 							[_x] call fnc_color,
						    //position
				            if(((vehicle _x)!=_x)&&(_x==effectiveCommander (vehicle _x))) then {(vehicle _x) modelToWorld [0,0,3]}
						    else 
						    {if((vehicle _x)==_x) then {_x modelToWorld [0,0,2.3]}},
						    //width
					        if(_x distance player > 100) then{ 0.10 } else { 0.25 },
						    //height
					        if(_x distance player > 100) then { 0.10 } else { 0.25 },
						    //angle
						    0,
						    //text
							if(_x distance player > 300 ) then{""} else{
                            if(((_x getHitPointDamage "HitHead") >0.1) || ((_x getHitPointDamage "HitBody") >0.1) || ((_x getHitPointDamage "HitHands") >0.1) || ((_x getHitPointDamage "HitLegs") >0.1)) then
							{format ["%1[受伤]", if(alive _x)then{name _x}else{""}]}else{if(alive _x)then{name _x}else{""}}},
						    //shadow
						   1,
						   //Text size
						   if(_x distance player > 100) then { 0.02} else {0.03},
						   //font
						   "PuristaMedium"
					    ];
   				    };
				};
		    };
        } forEach AllPlayers;
	}
];