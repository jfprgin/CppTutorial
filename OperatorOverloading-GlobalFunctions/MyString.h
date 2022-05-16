#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
    friend bool operator==(const MyString &lhs, const MyString &rhs);
    friend MyString operator-(const MyString &obj);
    friend MyString operator+(const MyString &lhs, const MyString &rhs);
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
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
