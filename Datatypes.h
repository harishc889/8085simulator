//Datatypes
#include<bits/stdc++.h>
#ifndef DATATYPES_CC
#define DATATYPES_CC
using namespace std;
 map<string,string> memory; //memory
 map<string,string> registers; //regiters
 int starting_address;
 map<string,pair<string,pair<string,string> > > code;//statements
 map<string,pair<string,pair<string,string> > >::iterator it;
 map<string,string>::iterator mit;
 map<string,string> flags;
 void initialization()
 {
     flags["sign"]="0";
     flags["zero"]="0";
     flags["parity"]="0";
     flags["carry"]="0";
 }
 string cal4temp(string t){
 	if(t=="0") t="0000";
    else if(t=="1") t="0001";
	else if(t=="2") t="0002";
	else if(t=="3") t="0003";
	else if(t=="4") t="0004";
	else if(t=="5") t="0005";
	else if(t=="6") t="0006";
	else if(t=="7") t="0007";
	else if(t=="8") t="0008";
	else if(t=="9") t="0009";
	else if(t=="A") t="000A";
	else if(t=="B") t="000B";
	else if(t=="C") t="000C";
	else if(t=="D") t="000D";
	else if(t=="E") t="000E";
	else if(t=="F") t="000F";
	
	return t;
}
 //int carry;
#endif
