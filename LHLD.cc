#include"Datatypes.h"
#include"IntHex.h"
#include"HexInt.h"
void LHLD(string address){
    registers["H"]=memory[address];
        int add=HexInt(address);
        address=IntHex(add+1);
        registers["L"]=memory[address];
}
