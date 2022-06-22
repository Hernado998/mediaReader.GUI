#include <iomanip>
#include <iostream>
#include <sstream>
#include <condition_variable>
#include <thread>
#include <chrono>
#include <unistd.h>
#include <vsomeip/vsomeip.hpp>
#include "Subject.h"
#include "Observer.h"
#define BITS 8
#ifndef SOMEIP_CLIENT_H
#define SOMEIP_CLIENT_H


    class someip_client{
        public:
            someip_client(Subject *subjectIn,Observer *observerIn,Subject *subjectOut,Observer *observerOut){
                sin=subjectIn;oin=observerIn;
                sout=subjectOut;oout=observerOut;
            }
            Subject *sin;
            Observer *oin;
            Subject *sout;
            Observer *oout;

            string req;
            string resp;

            shared_ptr<vsomeip::application> app;
            mutex mutex1;
            condition_variable condition;
            void on_availability(vsomeip::service_t _service, vsomeip::instance_t _instance, bool _is_available);
            void on_message(const shared_ptr<vsomeip::message> &_response);
            void listener();
            void run();
            void init();
            void changeID(int id,shared_ptr< vsomeip::message > req);
            void sendRequest(string message, shared_ptr< vsomeip::payload > its_payload,vector< vsomeip::byte_t > its_payload_data,shared_ptr< vsomeip::message > request);
    };
#endif