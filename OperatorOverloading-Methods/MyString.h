#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
private:
    char *str;                                                                          //pointer to a char[] that holds a C-style string
public:
    MyString();                                                                      //No-args constructor
    MyString(const char *s);                                                 //Overloaded constructor
    MyString(const MyString &source);                               //Copy constructor
    MyString(MyString &&source);                                      //Move constructor
    ~MyString();                                                                   //Destructor
    
    MyString &operator=(const MyString &rhs);               //Copy assingment
    MyString &operator=(MyString &&rhs);                      //Move assigment
    
    MyString operator-() const;                                         //Make lowercase
    MyString operator+(const MyString &rhs) const;       //Concatenate
    bool operator==(const MyString &rhs) const;
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
