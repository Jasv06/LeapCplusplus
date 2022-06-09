#include <iostream>
#include <string.h>
#include "Leap.h"

using namespace Leap;

class SampleListener:public Listener{
  public: 
  virtual void onConnect(const Controller&);
  virtual void onFrame(const Controller&);
};

void SampleListener::onConnect(const Controller& controller){
  std::cout<<"Connected"<<std::endl;
}

void SampleListener::onFrame(const Controller& controller){
  std::cout<<"Frame Available"<<std::endl;
}

int main(int argc, char** argv){
  
  SampleListener listener;
  
  //Controller helps us to connect to the Leap motion service/daemon
  Controller controller;

  std::cout<< "Press enter to quit.." << std::endl;
  std::cin.get();
  
  controller.removeListener(listener);
  
  return 0;

}
