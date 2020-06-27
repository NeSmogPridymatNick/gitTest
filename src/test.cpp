#include "test.h"

void myClass::changeStr(const std::string &str) {
    _str = str;
}

void myClass::changeStr(std::string &&str) {
    _str = str;
}

void myClass::printStr() const {
    std::cout << _str << std::endl;
}


