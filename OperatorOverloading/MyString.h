#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
private:
    char *str;
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    ~MyString();
    
    void display() const;
    int get_length() const;
    const char *get_char() const;

};

#endif // _MYSTRING_H_
