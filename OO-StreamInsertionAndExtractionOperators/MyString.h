#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &in, MyString &rhs);
private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    MyString();                                                         // No-args constructor
    MyString(const char *s);                                     // Overloaded constructor
    MyString(const MyString &source);                    // Copy constructor
    MyString( MyString &&source);                         // Move constructor
    ~MyString();                                                     // Destructor
    
    MyString &operator=(const MyString &rhs); // Copy assignment
    MyString &operator=(MyString &&rhs);       // Move assignment
    
    void display() const;
    
    int get_length() const;                                       // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
