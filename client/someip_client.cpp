#include "someip_client.h"

#define SAMPLE_SERVICE_ID 0x1234
#define SAMPLE_INSTANCE_ID 0x5678
#define SAMPLE_METHOD_ID 0x0422

using namespace this_thread;
using namespace chrono;
using chrono::system_clock;
string vin;
int a;


string getData(string received){
    string ou="";
    for(int i=6;i<received.length();i++){
        ou+=received[i];
    }
    return ou;
}

void someip_client::on_message(const shared_ptr<vsomeip::message> &_response) {

  shared_ptr<vsomeip::payload> its_payload = _response->get_payload();
  vsomeip::length_t l = its_payload->get_length();

  // Get payload
  stringstream ss;
  for (vsomeip::length_t i=0; i<l; i++) {
       ss << char((int)*(its_payload->get_data()+i));
    }

  /*cout << "CLIENT: Received message with Client/Session ["
      << setw(4) << setfill('0') << hex << _response->get_client() << "/"
      << setw(4) << setfill('0') << hex << _response->get_session() << "] "
      << ss.str() << endl;*/
  //sout->CreateMessage(ss.str());
  vin=ss.str();
  
  //std::cout<<ss.str()<<std::endl;
}

void someip_client::run() {
  auto start = chrono::steady_clock::now();
  unique_lock<mutex> its_lock(mutex1);
  condition.wait(its_lock);
  #undef SAMPLE_METHOD_ID
  #define SAMPLE_METHOD_ID a
  shared_ptr< vsomeip::message > request;
  request = vsomeip::runtime::get()->create_request();
  request->set_service(SAMPLE_SERVICE_ID);
  request->set_instance(SAMPLE_INSTANCE_ID);
  request->set_method(SAMPLE_METHOD_ID);

  shared_ptr< vsomeip::payload > its_payload = vsomeip::runtime::get()->create_payload();
  vector< vsomeip::byte_t > its_payload_data;
  
  while(1){
    req=oin->message_from_subject_;
    if(req.compare("")!=0){
      if(req.substr(0,6).compare("0x0001")==0){
          changeID(0x0001,request);
          sendRequest("0",its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0002")==0){
          changeID(0x0002,request);
          sendRequest("0",its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0003")==0){
          changeID(0x0003,request);
          sendRequest("0",its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0004")==0){
          changeID(0x0004,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0005")==0){
          changeID(0x0005,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0006")==0){
          changeID(0x0006,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0007")==0){
          changeID(0x0007,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0008")==0){
          changeID(0x0008,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }

      else if(req.substr(0,6).compare("0x0101")==0){
          changeID(0x0101,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0102")==0){
          changeID(0x0102,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0103")==0){
          changeID(0x0103,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0104")==0){
          changeID(0x0104,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0105")==0){
          changeID(0x0105,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0106")==0){
          changeID(0x0106,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0107")==0){
          changeID(0x0107,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0108")==0){
          changeID(0x0108,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0109")==0){
          changeID(0x0109,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0110")==0){
          changeID(0x0110,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0111")==0){
          changeID(0x0111,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0201")==0){
          changeID(0x0201,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }

      else if(req.substr(0,6).compare("0x0301")==0){
          changeID(0x0301,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0302")==0){
          changeID(0x0302,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0303")==0){
          changeID(0x0303,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0304")==0){
          changeID(0x0304,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0401")==0){
          changeID(0x0401,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0402")==0){
          changeID(0x0402,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0501")==0){
          changeID(0x0501,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0502")==0){
          changeID(0x0502,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0503")==0){
          changeID(0x0503,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0504")==0){
          changeID(0x0504,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0505")==0){
          changeID(0x0505,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0506")==0){
          changeID(0x0506,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0507")==0){
          changeID(0x0507,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0508")==0){
          changeID(0x0508,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0509")==0){
          changeID(0x0509,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0510")==0){
          changeID(0x0510,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0511")==0){
          changeID(0x0511,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0512")==0){
          changeID(0x0512,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0513")==0){
          changeID(0x0513,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0514")==0){
          changeID(0x0514,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else if(req.substr(0,6).compare("0x0515")==0){
          changeID(0x0515,request);
          sendRequest(getData(req),its_payload,its_payload_data,request);
      }
      else{
        cout<<"Invalid request"<<endl;
      }
      oin->message_from_subject_="";
    }
    
    
    /*int b;cin>>hex>>b;
    string m;cin>>m;
    
    changeID(b,request);
    
    sendRequest(m,its_payload,its_payload_data,request);*/
  }
  cout<<"ok"<<endl;
  cout<<"\n"<<endl;
  
    
}

void someip_client::on_availability(vsomeip::service_t _service, vsomeip::instance_t _instance, bool _is_available) {
    cout << "CLIENT: Service ["
            << setw(4) << setfill('0') << hex << _service << "." << _instance
            << "] is "
            << (_is_available ? "available." : "NOT available.")
            << endl;
    condition.notify_one();
}

void someip_client::init() {
    
    app = vsomeip::runtime::get()->create_application("Hello");
    app->init();
    app->register_availability_handler(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, bind(&someip_client::on_availability,this,placeholders::_1,placeholders::_2,placeholders::_3));
    app->request_service(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID);
    a=0x0424;
    thread sender(bind(&someip_client::run, this));
    app->start();
    
   
    
}
void someip_client::changeID(int id, shared_ptr< vsomeip::message > request){
    #undef SAMPLE_METHOD_ID
    #define SAMPLE_METHOD_ID id
    app->unregister_message_handler(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_METHOD_ID);
    request->set_method(SAMPLE_METHOD_ID);
    app->register_message_handler(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_METHOD_ID, std::bind(&someip_client::on_message, this, std::placeholders::_1));
}
void someip_client::sendRequest(string message,shared_ptr< vsomeip::payload > its_payload,vector< vsomeip::byte_t > its_payload_data,shared_ptr< vsomeip::message > request){
  for(int j=0;j<message.length();j++){
        its_payload_data.push_back(int(message[j]));
    }
    its_payload->set_data(its_payload_data);
    request->set_payload(its_payload);
    app->send(request);
    its_payload_data.clear();
}

void someip_client::listener(){
    while(1){
        if(vin.compare("")!=0){
            //cout<<vin.compare("")<<endl;
            sout->CreateMessage(vin);
            vin="";
            sout->CreateMessage("");
        }
    }
}
