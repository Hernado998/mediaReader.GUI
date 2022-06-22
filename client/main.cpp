#include <iostream>
#include <string>
#include <thread>
#include <time.h>

#include "someip_client.h"
#include "communication_interface.h"

int main()
{

   
    Subject *sin= new Subject;
    Observer *oin= new Observer(*sin);
    Subject *sout= new Subject;
    Observer *oout= new Observer(*sout);

    someip_client SC(sin,oin,sout,oout);
    communication_interface CI(sin,oin,sout,oout);

    thread th1(&someip_client::init,&SC);
    std::this_thread::sleep_for (std::chrono::milliseconds(100));

    thread th3(&communication_interface::init,&CI);
    std::this_thread::sleep_for (std::chrono::milliseconds(100));

    thread th2(&someip_client::listener,&SC);
    std::this_thread::sleep_for (std::chrono::milliseconds(100));
    
    thread th4(&communication_interface::listener,&CI);
    

    th1.join();
    th2.join();
    th3.join();
    th4.join();
}