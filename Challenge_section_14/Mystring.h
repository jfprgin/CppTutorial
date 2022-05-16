#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-( const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, int n);
    friend Mystring &operator*=(Mystring &lhs, int n);
    friend Mystring &operator++(Mystring &obj);
    friend Mystring operator++(Mystring &obj, int);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                             // No-args constructor
    Mystring(const char *s);                                        // Overloaded constructor
    Mystring(const Mystring &source);                      // Copy constructor
    Mystring( Mystring &&source);                           // Move constructor
    ~Mystring();                                                         // Destructor
    
    Mystring &operator=(const Mystring &rhs);       // Copy assignment
    Mystring &operator=(Mystring &&rhs);             // Move assignment
    /*Mystring operator-() const;                                 //Make lowercase
    bool operator==(const Mystring &rhs) const;    //Equality
    bool operator!=(const Mystring &rhs) const;    //Not equal
    bool operator<(const Mystring &rhs) const;      //lhs is lexicaly less than rhs
    bool operator>(const Mystring &rhs) const;      //lhs is lexicaly greater than rhs
    Mystring operator+(const Mystring &rhs) const;      //Concatenate
    Mystring &operator+=(const Mystring &rhs);        //Concatenate the rhs string to the lhs string and store the result in lhs object
    Mystring operator*(int n) const;                                      //Repeat -  results in a string that is copied n times
    Mystring &operator*=(int n);                                // repeat and assign
    Mystring &operator++();                                      // pre-increment
    Mystring operator++(int);                                   // post-increment*/
    
    void display() const;
    
    int get_length() const;                                         // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
