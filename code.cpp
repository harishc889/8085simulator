#include<iostream>
#include"checkMnemonics.cpp"
#include"Datatypes.h"
#include"HexInt.h"
#include"IntHex.h"
#include"Transform.h"

using namespace std;

string allocate_values(string nemo,vector<string> v,string sA)
{
	if(v.size()==2){
	code[sA] = make_pair(nemo,make_pair(v[0],v[1]));
	}
	else if(v.size()==1){
        code[sA] = make_pair(nemo,make_pair(v[0],"NULL"));
	}
	
	int a=HexInt(sA);
	
	a=a+checkMnemonicsSize(nemo);
	sA=IntHex(a);
	sA=transform1(sA);
	return sA;

   
}
