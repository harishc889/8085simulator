//#include<bits/stdc++.h>
#include"Datatypes.h"
#include"HexInt.h"
#include"IntHex.h"
#include"Transform.h"
using namespace std;
void ADD(string R){
//cout<<"ADD"<<endl;
    int R1=HexInt(registers[R]);
    int R2=HexInt(registers["A"]);
    int sum;
    cout<<"r1"<<R1<<"r2"<<R2;
    sum=R1+R2;
    if(sum>255){
        sum=255;
        flags["carry"]="1";
    }
    R=IntHex(sum);
    registers["A"]=transform1(R);
   // cout<<registers["A"]<<endl;
}

