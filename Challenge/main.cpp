// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string sentence1 {};
    string sentence2 {};
    
    cout << "Enter a sentence: ";
    getline(cin, sentence1);
    
    sentence2 = sentence1;
    
    for (size_t i = 0; i < sentence1.length(); i++) {
        size_t position = alphabet.find(sentence1.at(i));
        if (position != string::npos)
            sentence2.at(i) = key.at(position);
        else
            sentence2.at(i) = sentence1.at(i);
    }
    
    for (size_t i = 0; i < sentence2.length(); i++) {
        size_t position = key.find(sentence2.at(i));
        if (position != string::npos)
            sentence1.at(i) = alphabet.at(position);
        else
            sentence1.at(i) = sentence2.at(i);
    }
    
//     for (char c:sentence1) {
//         size_t position = alphabet.find(c);
//         if (position != string::npos) {
//             char new_char {key.at(position)};
//             sentence2 += new_char;
//         }
//         else
//             sentence2 += c;

    
    cout << sentence2 << endl;
    cout << sentence1 << endl;
    
    cout << endl;
    return 0;
}

