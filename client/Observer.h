#ifndef OBSERVER_H
#define OBSERVER_H


#include <iostream>
#include <list>
#include <string>
#include "IObserver.h"
using namespace std;

class Observer : public IObserver {
 public:
  Observer(Subject &subject) : subject_(subject) {
    this->subject_.Attach(this);
    std::cout << "Hi, I'm the Observer \"" << ++Observer::static_number_ << "\".\n";
    this->number_ = Observer::static_number_;
  }
  virtual ~Observer() {
    std::cout << "Goodbye, I was the Observer \"" << this->number_ << "\".\n";
  }

  void Update(const std::string &message_from_subject) override {
    message_from_subject_ = message_from_subject;
    PrintInfo();
    getInfo();
  }
  void RemoveMeFromTheList() {
    subject_.Detach(this);
    std::cout << "Observer \"" << number_ << "\" removed from the list.\n";
  }
  void PrintInfo() {
    //std::cout << "Observer \"" << this->number_ << "\": a new message is available --> " << this->message_from_subject_ << std::endl;
  }
  string getInfo(){
      return this->message_from_subject_;
  }

 public:
  std::string message_from_subject_;
  Subject &subject_;
  int static_number_;
  int number_;
};
#endif