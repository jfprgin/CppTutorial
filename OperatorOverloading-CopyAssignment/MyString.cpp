#include <iostream>
#include <cstring>
#include "MyString.h"

//No-args constructor
MyString::MyString()
    : str{nullptr} {
        str = new char[1];
        *str = '\0';
}
//Overloaded constructor
MyString::MyString(const char *s) 
    : str{nullptr} {
        if (s == nullptr) {
            str = new char[1];
             *str = '\0';
        }
        else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
}
//Copy constructor
MyString::MyString(const MyString &source)
    : str {nullptr} {
        str =new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}
//Destructor
MyString::~MyString() {
    delete [] str;
}
//Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

//Display method
void MyString::display() const {
    std::cout << str << " : " << get_length()<<std::endl;
}
//getters
int MyString::get_length()const { return strlen(str); }
const char *MyString::get_str() const { return str; }

