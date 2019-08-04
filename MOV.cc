#include"Datatypes.h"
void MOV(string R1,string R2)
{//(REG C,REG A)
    string temp=registers[R2];

    registers[R1]=registers[R2];
    if(R1=="M"){
      memory[registers["H"]+registers["L"]]=registers["M"];
	}
}
