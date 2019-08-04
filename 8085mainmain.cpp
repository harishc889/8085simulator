#include<iostream>
#include<string>
#include<vector>
#include"code.cpp"
#include"Validate.cc"
#include"Datatypes.h"

#include"setMemValues.cc"
#include"checkMemory.cc"
using namespace std;

    int main(){

	int noa=0,flag=0;
	string  sA,nA,nemo,mloc,mvalues;  //sA=Startingadress //nA=nextaddress
	//registers["A"]="4";
   // registers["B"]="2";
   // registers["C"]="1";
	cout<<"enter the starting address: "<<endl;
	cin>>sA;
	nA=sA;
	do{

        cout<<nA<<": ";
        cin>>nemo;
        if(nemo=="SET")
		{
			cin>>mloc;
			cin>>mvalues;
			setMemValues(mloc,mvalues);

		}
        else{
                noa = checkMnemonicsArgs(nemo);//return number of argument req by instruction
               
			    if(noa!=-1){
				
                	vector<string> v;
                	while(noa--){
                   	 string key;
                   	 cin>>key;
                   	 v.push_back(key);

                	}
               	 nA=allocate_values(nemo,v,nA);
            	}
            	else {
            		cout<<"Invalid Mnemonics"<<endl;
            		flag=1;
            		break;
				}
        }

	}while(nemo!="HLT");

	// for(it=code.begin();it!=code.end();++it){
    	//cout<<it->first<<" :"<<it->second.first<<" "<<it->second.second.first<<" "<<it->second.second.second<<endl;
//            code[]
     
        
	  if(flag==0){
	  
		Validate();
		checkMemory();
		}
	
   // }
        //sfor(mit=memory.begin();mit!=memory.end();++mit){
   // 	 	cout<<mit->first<<" "<<mit->second<<endl;
    //	 }
        
   // cout<<registers["A"]<<" "<<registers["B"]<<" "<<registers["C"]<<endl;
   // cout<<registers["A"];
    //cout<<memory["2500"];


}
