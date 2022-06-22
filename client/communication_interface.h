#include <bits/stdc++.h>
#include "Subject.h"
#include "Observer.h"

#define BITS 8
using namespace std;


    class communication_interface{
            public:
                
                communication_interface(Subject *subjectIn,Observer *observerIn,Subject *subjectOut,Observer *observerOut){
                    sin=subjectIn;oin=observerIn;
                    sout=subjectOut;oout=observerOut;
                }
                Subject *sin;
                Observer *oin;
                Subject *sout;
                Observer *oout;

                void init();
                void listener();
    };
