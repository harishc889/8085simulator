//#include<bits/stdc++.h>
#include"Datatypes.h"
#include"HexInt.h"
#include"IntHex.h"
#include"Transform.h"
using namespace std;
void ADI(string R){
cout<<"ADD"<<endl;
    int R1=HexInt(R);
    int R2=HexInt(registers["A"]);
    int sum=0;
    sum=R1+R2;
    if(sum>255){
        sum=255;
        flags["carry"]="1";
    }
    R=IntHex(sum);
    registers["A"]=transform1(R);

}
