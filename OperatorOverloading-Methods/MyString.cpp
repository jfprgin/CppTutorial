#include <iostream>
#include <cstring>
#include <cctype>
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
        source.str = nullptr;
        std::cout << "Move destructor used" << std::endl;
}

MyString::~MyString() {
    delete [] str;
}

//Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Using copy assigment" << std::endl;
    
    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
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

//Equality
bool MyString::operator==(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

//Make lowercase
MyString MyString::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    MyString temp {buff};
    delete [] buff;
    return temp;
}

//Concatenate
MyString MyString::operator+(const MyString &rhs) const{
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    MyString temp {buff};
    delete [] buff;
    return temp;
}

//Display method
void MyString::display() const {
    std::cout << str << " : " << get_length()<<std::endl;
}
//getters
int MyString::get_length()const { return std::strlen(str); }
const char *MyString::get_str() const { return str; }