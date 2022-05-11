#include<iostream>
#include<string.h>

using namespace std;

int main()
{
   string s1;   //Empty
   string s2 {"Frank"};
   string s3 {s2};
   string s4 {"Frank", 3};  //Fra
   string s5 {s3, 0, 2}; //Fr
   string s6 (3, 'X');  //XXX
   
   cout << s2[0] << endl;
   cout << s2.at(0) << endl;
   
   s2[0] = 'f';
   s2.at(0) = 'p';
   
   for (char c : s2)
       cout << c << endl;
   
   s1 = "C++ Rocks!";
   s2 = s1;
   
   string part1 {"C++"};
   string part2 {"is a powerful"};
   
   string sentence;
   
   sentence = part1 + " " + part2 + " language";    //C-style strings don't work with operators
   
   //sentence = "C++" + " is a powerful";   //Illegal
    
    string teststring {"This is a test"};
    
    cout << teststring.substr(0, 4) << endl;    //object.substr(start_index, length)
    cout << teststring.substr(5, 2) << endl;
    cout << teststring.substr(10, 4) << endl;
    
    cout << teststring.find("This") << endl;
    cout << teststring.find("is") << endl;
    cout << teststring.find("test") << endl;
    cout << teststring.find('e') << endl;
    cout << teststring.find("is", 4) << endl;
    cout << teststring.find("XX") << endl;
    
    cout << teststring.erase(0, 5) << endl;
    cout << teststring.erase(5,4) << endl;
    teststring.clear();
    
    string test;
    test = "Frank";
    cout << test.length() << endl;
    
    test += " James";
    test.insert(5, " or");
    cout << test << endl;
    
    cout << "Enter a sentence: ";
    getline(cin, test);   //cin only accepts up to the first whitespace
    cout << test << endl;
    
    string word{};
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = test.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
    
    return 0;
}