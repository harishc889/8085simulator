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
    
	string str,word;
	
	fstream file;
	
	
	
	int noa=0,flag=0;
	string  sA,nA,nemo,mloc,mvalues;  //sA=Startingadress //nA=nextaddress
	
	cout<<"enter the starting address: "<<endl;
	cin>>sA;
	nA=sA;
	file.open("bubblesort.asm",ios::in);
	do{
		 
	    vector <string> v;
	    getline(file,str);
		stringstream part(str);
	
		while(part>> word)
		    v.push_back(word);
	
	//	for(int i=0;i<v.size();i++)
	//	cout<<v[i]<<endl;
		
		
     //   cout<<nA<<": ";
        nemo=v[0];
        if(nemo=="SET")
		{
			mloc=v[1];
			mvalues=v[2];
			setMemValues(mloc,mvalues);

		}
        else{
                noa = checkMnemonicsArgs(nemo);//return number of argument req by instruction
               
			    if(noa!=-1){
				
                	vector<string> v1;
                	int i=1;
                	while(noa--){
                   	 string key;
                   	 
                   	 key=v[i];
                   	 v1.push_back(key);
                   	 i=i+1;

                	}
               	 nA=allocate_values(nemo,v1,nA);
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
