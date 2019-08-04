#include"Datatypes.h"
void DCR(string R){

    int sum=0;
    int R1=HexInt(registers[R]);
    sum=R1-1;
    if(sum<0){
            sum=sum*-1;
            flags["sign"]="1";
    }
    else if(sum==0)
    {
    	flags["zero"]="1";
	}
	else {
		flags["zero"]="0";
	}
    registers[R]=transform1(IntHex(sum));
}

