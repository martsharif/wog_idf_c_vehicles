/*
Script controls whenether merkava can carry passangers. IRL there is 10 shells stored in autoloader, other shells stored in cargo section of the vehicle.  
*/
params["_v"];

_v lockCargo true;

private _sum = 0;
private _myArray =  magazinesAmmoFull [_v, false];;
{ 
    private _type = _x select 0;
    if (_type iskindof ["rhs_mag_M1069",configFile >> "cfgMagazines"] || _type iskindof ["BWA3_1Rnd_LAHAT",configFile >> "cfgMagazines"]) then
    {
        private _num = _x select 1; 
        _sum = _sum + _num; 
    };
} forEach _myArray;

if (_sum <= 10) then
{
	_v lockCargo false;
};