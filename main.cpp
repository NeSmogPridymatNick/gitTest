/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: acedia
 *
 * Created on June 25, 2020, 8:09 PM
 */

#include <cstdlib>
#include <iostream>
#include "src/test.h"
#include <utility>
#include <string>
/*
 * 
 */
int main(int argc, char** argv) {
    myClass tmp("123");
    tmp.printStr();
    std::string s = "321";
    tmp.changeStr(std::move(s));
    tmp.printStr();
    return 0; 
}

