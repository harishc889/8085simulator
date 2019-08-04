#include"Datatypes.h"
#include"IntHex.h"
#include"HexInt.h"
#include"Transform.h"

void INX(string R){
    int sum=0;
    string temp;
    if(R=="H"){
        sum= HexInt(registers["H"]+registers["L"]);
        sum=sum+1;
      
        temp=IntHex(sum);
        
        temp=transform1(temp);
        
        if(temp.length()==1)
        {
        	temp=cal4temp(temp);
		}
        cout<<"inx HL ::"<<temp<<endl;
        registers["H"]=temp.substr(0,2);
        registers["L"]=temp.substr(2,2);
        registers["M"]=memory[temp];
        cout<<"\n r[M] "<<registers["M"]<<"\n m[temp]"<<memory[temp]<<endl;
        
        
    }
    else if(R=="B"){
        sum= HexInt(registers["B"]+registers["C"]);
        sum=sum+1;
        temp=IntHex(sum);
        temp=transform1(temp);
        registers["B"]=temp.substr(0,2);
        registers["C"]=temp.substr(2,2);
        registers["M"]=memory[temp];
    }
    else if(R=="D"){
        sum= HexInt(registers["D"]+registers["E"]);
        sum=sum+1;
        temp=IntHex(sum);
        temp=transform1(temp);
        registers["D"]=temp.substr(0,2);
        registers["E"]=temp.substr(2,2);
        registers["M"]=memory[temp];
    }
}
