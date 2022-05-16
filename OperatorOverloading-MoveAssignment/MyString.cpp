#include <iostream>
#include <cstring>
#include "MyString.h"

//No-args constructor
MyString::MyString() 
     :str {nullptr}{
        str = new char[1];
        *str = '\0';
}

//Overloaded constructor
MyString::MyString(const char *s)
    :str {nullptr} {
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
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
        std::cout << "Copy destructor used" << std::endl;
}

//Move constructor
MyString::MyString(MyString &&source)
    : str {source.str} {
        source.str =nullptr;
        std::cout << "Move destructor used" << std::endl;
}

MyString::~MyString() {
    if (str == nullptr)
        std::cout << "Calling destructor for MyString : nullptr" << std::endl;
    else {
        std::cout << "Calling destructor for MyString : " << str << std::endl;
    }
    delete [] str;
}

//Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Using copy assigment" << std::endl;
    
    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[std::strlen(str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

//Move assignment
MyString &MyString::operator=(MyString &&rhs) {
     std::cout << "Using move assigment" << std::endl;
     if (this == &rhs)
         return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//Display method
void MyString::display() const {
    std::cout << str << " : " << get_length()<<std::endl;
}
//getters
int MyString::get_length()const { return strlen(str); }
const char *MyString::get_str() const { return str; }



