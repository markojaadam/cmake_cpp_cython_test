//
// Created by adam on 2020. 11. 23..
//

#include "cpp_module.cpp"
#include <iostream>

int main(){
  Container cont(1);
  cont.add1();
  std::cout << cont.getNum() << std::endl;
}