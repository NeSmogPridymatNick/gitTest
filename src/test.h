#pragma once

#include <string>
#include <iostream>

class myClass {
public:
    
    myClass(const std::string &str) : _str(str) {
    }
    
    void changeStr(const std::string &str);
    
    void changeStr(std::string &&str);
    
    void printStr() const;
    
private:
    std::string _str;
};

