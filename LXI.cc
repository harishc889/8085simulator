#include"Datatypes.h"
#include"IntHex.h"
#include"HexInt.h"
//#include"separateNum.cc"
void LXI(string R,string address)
{
    if(R=="H"){
      
        registers["H"]=address.substr(0,2);
        registers["L"]=address.substr(2,2);
        registers["M"]=memory[registers["H"]+registers["L"]];
        
    }
    else if(R=="B"){
        registers["B"]=address.substr(0,2);
        registers["C"]=address.substr(2,2);
        registers["M"]=memory[registers["H"]+registers["L"]];
    }
    else if(R=="D"){
        registers["D"]=address.substr(0,2);
        registers["E"]=address.substr(2,2);
        registers["M"]=memory[registers["D"]+registers["L"]];
    }
}
