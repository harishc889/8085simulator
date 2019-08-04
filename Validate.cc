#include"Datatypes.h"
#include"LDA.cc"
#include"ADD.cc"
#include"ADI.cc"
#include"SUB.cc"
#include"SUI.cc"
#include"STA.cc"
#include"INR.cc"
#include"DCR.cc"
#include"MOV.cc"
#include"LXI.cc"
#include"MVI.cc"
#include"LHLD.cc"
#include"DCX.cc"
#include"INX.cc"
#include"CMP.cc"
using namespace std;
void Validate(){
    it=code.begin();
    while(it!=code.end()){
        if(it->second.first=="JC"){
                if(flags["carry"]=="1"){
                    it=code.find(it->second.second.first);
                    flags["carry"]="0";
                   --it;
               }
        }

        else if(it->second.first=="JNC"){
                 if(flags["carry"]=="0"){
                    it=code.find(it->second.second.first);
                     --it;
                    }
        }
        else if(it->second.first=="JZ"){
                 if(flags["zero"]=="1"){
                    it=code.find(it->second.second.first);
                    flags["zero"]=="0";
                    --it;
                    }
                       
                    
        }
        else if(it->second.first=="JNZ"){
                 if(flags["zero"]=="0"){
                    it=code.find(it->second.second.first);
                     --it;
                    }
                 
        }
        else{
                 if(it->second.first=="LDA"){
                    LDA(it->second.second.first);
                    cout<<"**LDA"<<registers["A"]<<endl;
                }

               else if(it->second.first=="ADD"){
                    ADD(it->second.second.first);
                    cout<<"**ADD"<<registers["A"]<<endl;
                }
                else if(it->second.first=="ADI"){
                    ADI(it->second.second.first);
                    cout<<"**ADI"<<registers["A"]<<endl;
                }
                else if(it->second.first=="SUB"){
                    SUB(it->second.second.first);
                    cout<<"**SUB"<<registers["A"]<<endl;
                }
                else if(it->second.first=="SUI"){
                    SUI(it->second.second.first);
                    cout<<"**SUI"<<registers["A"]<<endl;
                }
                else if(it->second.first=="STA"){
                    STA(it->second.second.first);
                    cout<<"**STA"<<memory[it->second.second.first]<<endl;
                }
                 else if(it->second.first=="INR"){
                    INR(it->second.second.first);
                    cout<<"**INR"<<registers[it->second.second.first]<<endl;
                }
                 else if(it->second.first=="DCR"){
                    DCR(it->second.second.first);
                    cout<<"**DCR"<<registers[it->second.second.first]<<endl;
                }
                 else if(it->second.first=="MOV"){
                    MOV(it->second.second.first,it->second.second.second);
                    cout<<"**MOV ";
					cout<<it->second.second.first<<registers[it->second.second.first]<<endl;
                }
                 else if(it->second.first=="MVI"){
                    MVI(it->second.second.first,it->second.second.second);
                    cout<<"**MVI"<<registers[it->second.second.first]<<endl;
                }
                else if(it->second.first=="LXI"){
                    LXI(it->second.second.first,it->second.second.second);
                    cout<<"LXI"<<registers[it->second.second.first]<<"\t"<<registers[it->second.second.first]<<endl;
                    cout<<memory[it->second.second.second];
                }
                else if(it->second.first=="LHLD"){
                    LXI(it->second.second.first,it->second.second.second);
                    cout<<"LHLD"<<registers[it->second.second.first]<<"\t";
                    cout<<memory[it->second.second.second];
                }
				else if(it->second.first=="DCX"){
					DCX(it->second.second.first);
				}
				else if(it->second.first=="INX"){
					INX(it->second.second.first);
				}
				else if(it->second.first=="CMP"){
					CMP(it->second.second.first);
				}
                
       }
       ++it;

    }
}

