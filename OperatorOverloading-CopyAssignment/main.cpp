#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main()
{
	MyString a {"Hello"};           //overloaded constructor
    MyString b;                         //no-args constructor
    b = a;                                  //copy assignment
                                               //b.operator=(a)
    b = "This is a test";             //b.operator  
    
    MyString empty;                 //overloaded constructor
    MyString larry("Larry");       //overloaded constructor
    MyString stooge{larry};       //copy constructor
    MyString stooges;               //overloaded constructor
    
    empty = stooge;                 //copy assignment
    
    empty.display();
    larry.display();
    stooge.display();
    empty.display();
    
    stooges = "Larry, Moe and Curly";
    stooges.display();
    
    vector<MyString> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    for (const MyString &s : stooges_vec)
        s.display();
        
    for (MyString &s : stooges_vec)
        s = "Changed";
        
    for (const MyString &s : stooges_vec)
        s.display();
    
	return 0;
}
