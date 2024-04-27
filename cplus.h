#ifndef CFUNCS_H_
#define CFUNCS_H_
#include <iostream>
namespace console{
   void clearconsole(){
      for(i = 0; i < 10000; i++){std::cout << " " << "\n";}
   }
   void setcolor(std::string color){
      if(color == "red"){std::cout << "\x1b[31m";}
      if(color == "blue"){std::cout << "\x1b[34m";}
      if(color == "white"){std::cout << "\x1b[37m";}
      if(color == "green"){std::cout << "\x1b[32m";}
      if(color == "yellow"){std::cout << "\x1b[33m";}
      if(color == "black"){std::cout << "\x1b[30m";}
   }
}
#endif
