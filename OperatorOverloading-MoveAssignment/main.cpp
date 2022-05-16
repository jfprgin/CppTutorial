#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main()
{
    MyString a {"Hello"};                             //Overloaded constructor
    a = MyString{"Holla"};                          //Overloaded constructor then move assignment
    a = "Bonjour";                                      //Overloaded constructor then move assignment
    
    MyString empty;                 //no-args constructor
    MyString larry ("Larry");       //overloaded constructor
    MyString stooge{larry};       //copy constructor
    MyString stooges;               //no-args constructor
    
    empty = stooge;                 //copy assignment operator
                                                //stooge is an l-value
    empty = "Funny";                //move assignment operator
                                                ///"Funny" is an r-value
    empty.display();
    larry.display();
    stooge.display();
    empty.display();
    
    stooges = "Larry, Moe and Curly";
    stooges.display();
    
    vector <MyString> stooges_vec;
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
