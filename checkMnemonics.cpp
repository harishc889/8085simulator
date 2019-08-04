#include<iostream>
#include<string>
#include<vector>
#include"Datatypes.h"

using namespace std;

int checkMnemonicsArgs(string nemo){
	if(nemo=="ADD"||nemo=="SUB"||nemo=="CMA"||nemo=="LDA"||nemo=="JMP"||nemo=="ADI"||nemo=="STA"
	||nemo=="SUI"||nemo=="INR"||nemo=="DCR"||nemo=="INX"||nemo=="DCX"||nemo=="STAX"
	||nemo=="ANA"||nemo=="ANI"||nemo=="ORA"||nemo=="ORI"||nemo=="XRA"||nemo=="XRI"||nemo=="CMP"
	||nemo=="JC"||nemo=="JNC"||nemo=="JZ"||nemo=="JNZ"||nemo=="SHLD"||nemo=="LHLD")
	return 1;
	else if(nemo=="MOV"||nemo=="MVI"||nemo=="LXI")
	return 2;
	else if(nemo=="HLT"||nemo=="RET")
	return 0;
	else
	return -1;
}
int checkMnemonicsSize(string nemo){
	if(nemo=="MOV"||nemo=="ADD"||nemo=="CMA"||nemo=="SUB"||nemo=="LDA"||nemo=="DCX"
	||nemo=="INX"||nemo=="DCR"||nemo=="INR"||nemo=="CMP")
	return 1;
	else if(nemo=="MVI"||nemo==""||nemo=="")
	return 2;
	else if(nemo=="LXI"||nemo=="LHLD"||nemo=="STA"||nemo=="JC"||nemo=="JNC"||nemo=="JNZ"||nemo=="JZ")
	return 3;
	else
    return -1;
}


