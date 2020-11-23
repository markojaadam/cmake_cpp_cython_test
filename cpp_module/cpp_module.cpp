//
// Created by adam on 2020. 11. 23..
//

#include "cpp_module.hpp"

Container::Container(int num) { number = num; }

Container::~Container(){}

void Container::add1() { number += 1; }

int Container::getNum() { return number; }