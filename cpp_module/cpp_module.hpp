//

// Created by adam on 2020. 11. 23..
//

#ifndef CMAKE_CYTHON_TEST_CPP_MODULE_HPP
#define CMAKE_CYTHON_TEST_CPP_MODULE_HPP

class Container {
public:
  int number;
  Container(int num);
  ~Container();
  void add1();
  int getNum();
};

#endif // CMAKE_CYTHON_TEST_CPP_MODULE_HPP
