#include <iostream>
#include <cstring>
#include "MyString.h"

 // No-args constructor
MyString::MyString() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
MyString::MyString(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
MyString::MyString(const MyString &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
MyString::MyString( MyString &&source) 
    :str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
MyString::~MyString() {
    delete [] str;
}

 // Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
MyString &MyString::operator=( MyString &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int MyString::get_length() const { return strlen(str); }
const char *MyString::get_str() const { return str; }
 
//overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const MyString &rhs) {
    os << rhs.str;
    return os;
}
 
//overloaded extraction operator
std::istream &operator >> (std::istream &in, MyString &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = MyString {buff};
    delete [] buff;
    return in;
}