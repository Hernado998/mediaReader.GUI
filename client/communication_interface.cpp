
#include "communication_interface.h"
string variable;
string d="###########################################################";
void communication_interface::init(){
    sin->CreateMessage("0x0106");
    string s="home/nadiros/Downloads/t";
    std::this_thread::sleep_for (std::chrono::milliseconds(1500));
    cout<<d<<endl;
    sin->CreateMessage("0x0001");
    std::this_thread::sleep_for (std::chrono::milliseconds(1500));
    cout<<d<<endl;
    sin->CreateMessage("0x0002");
    std::this_thread::sleep_for (std::chrono::milliseconds(1500));
    cout<<d<<endl;
    sin->CreateMessage("0x0003");
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0004","0");
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0201");
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0301","/"+s);
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0303","/"+s);
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0402");
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0401","10");
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0506");
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0505");
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0513","");
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    sin->CreateMessage("0x0503");
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout<<d<<endl;
    
    /*cout<<d<<endl;
    sin->CreateMessage("0x0101",s+"/test.mp3");
    std::this_thread::sleep_for (std::chrono::milliseconds(1200));
    cout<<d<<endl;
    sin->CreateMessage("0x0102");
    std::this_thread::sleep_for (std::chrono::milliseconds(1200));
    cout<<d<<endl;
    sin->CreateMessage("0x0005","2");
    std::this_thread::sleep_for (std::chrono::milliseconds(1200));
    cout<<d<<endl;*/
    string v=variable;
    cout<<d<<endl;
    while(1){
        string m;cin>>m;
        if(m.compare("0")==0){
            sin->CreateMessage("0x0401","10");
        }
        else if(m.compare("1")==0){
            sin->CreateMessage("0x0401","01");
        }
        else if(m.compare("104")==0){
            sin->CreateMessage("0x0104");
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("105")==0){
            sin->CreateMessage("0x0105");
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("107")==0){
            sin->CreateMessage("0x0107");
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("103")==0){
            sin->CreateMessage("0x0103");
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("106")==0){
            sin->CreateMessage("0x0106");
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("007")==0){
            string v;cin>>v;
            sin->CreateMessage("0x0007",v);
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("004")==0){
            string v;cin>>v;
            sin->CreateMessage("0x0004",v);
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("005")==0){
            string v;cin>>v;
            sin->CreateMessage("0x0005",v);
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("006")==0){
            string v;cin>>v;
            sin->CreateMessage("0x0006",v);
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("008")==0){
            string v;cin>>v;
            sin->CreateMessage("0x0008",v);
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("101")==0){
            string v;cin>>v;
            sin->CreateMessage("0x0101",v);
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else if(m.compare("503")==0){
            string v;cin>>v;
            sin->CreateMessage("0x0101",v);
            std::this_thread::sleep_for (std::chrono::milliseconds(500));
        }
        else{
            sin->CreateMessage(m);
        }
        
    }
    
}
void communication_interface::listener(){
    while(1){
        string s=oout->message_from_subject_;
        if(s.compare("")!=0){
            cout<<s<<endl;
            variable=s;
            oout->message_from_subject_="";
            
        }

    }
}