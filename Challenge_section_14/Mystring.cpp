#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
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
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}
/*
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] =std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

bool Mystring::operator!=(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) != 0);
}

bool Mystring::operator<(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) < 0);
}

bool Mystring::operator>(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) > 0);
}

//Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char [std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//Concatenate the rhs string to the lhs string and store the result in lhs object
Mystring &Mystring::operator+=(const Mystring &rhs) {
    *this = *this + rhs.str;
    return *this;
}

// repeat and assign
Mystring &Mystring::operator*=(int n) {
    *this = *this * n;
    return *this;
}

//Repeat -  results in a string that is copied n times
Mystring Mystring::operator*(int n) const {
   Mystring temp;
    for (int i = 0; i < n; i++)
        temp = temp + *this;
    return temp;
//    char *buff = new char[std::strlen(str) + 1];
//    std::strcpy(buff, str);
//    Mystring temp {buff};
//    delete [] buff;
//    for (int i = 0; i < n; i++)
//        *this = *this + temp;
//    return *this;
}

// pre-increment
Mystring &Mystring::operator++()   {  
   for (size_t i = 0; i < std::strlen(str); i++)
       str[i] = std::toupper(str[i]);
   return *this;
}

// post-increment
Mystring Mystring::operator++(int) {   
   Mystring temp (*this);       // make a copy
   operator++();                    // call pre-increment - make sure you call pre-increment!
   return temp;                     // return the old value
}*/

//alternative way with functions
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) != 0);
}

bool operator<(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) < 0);
}

bool operator>(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) > 0);
}

Mystring operator-( const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring &operator+=(Mystring &lhs, const Mystring &rhs) {
    lhs = lhs + rhs;
    return lhs;
}

Mystring operator*(const Mystring &lhs, int n) {
    Mystring temp;
    for (int i = 0; i < n; i++ )
        temp = temp + lhs;
    return temp;
}

Mystring &operator*=(Mystring &lhs, int n) {
    lhs = lhs * n;
    return lhs;
}

Mystring &operator++(Mystring &obj) {
    for (size_t i = 0; i < std::strlen(obj.str); i++)
        obj.str[i] = std::toupper(obj.str[i]);
    return obj;
}

Mystring operator++(Mystring &obj, int) {
    Mystring temp {obj};
    ++obj;
    return temp;
}