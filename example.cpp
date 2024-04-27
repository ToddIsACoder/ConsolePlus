#include <iostream>
#include "cplus.h"

int main(){
  console::setcolor("red");
  std::cout << "this is red\n";
  console::setcolor("blue");
  std::cout << "this is blue\n";
  return 0;
}
