#include"Datatypes.h"
#include"HexInt.h"
	void CMP(string re){
		int a=HexInt(registers["A"]);
		int r=HexInt(registers[re]);
		if(a<r){
			flags["carry"]="1";
			flags["zero"]="0";
		}
		else if(a==r){
			flags["carry"]="0";
			flags["zero"]="1";
		}
		else if(a>r){
			flags["carry"]="0";
			flags["zero"]="0";
		}
	}
