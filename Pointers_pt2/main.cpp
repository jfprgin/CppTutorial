#include<iostream>
#include <string>

using namespace std;

int main() {
//    int scores [] {100, 95 ,89};
//    
//    cout << "Value of scores: " << scores << endl;
//    
//    int *score_ptr {scores};
//    cout << "Value of score_ptr: " << score_ptr << endl;
//    
//    cout << "\nArray subscript notation -------------------" << endl;
//    cout << scores[0] << endl;
//    cout << scores[1] << endl;
//    cout << scores[2] << endl;
//    
//    cout << "\nPointer subscript notation -----------------" << endl;
//    cout << score_ptr[0] << endl;
//    cout << score_ptr[1] << endl;
//    cout << score_ptr[2] << endl;
//    
//    cout << "\nPointer offset notation --------------------" << endl;
//    cout << *score_ptr << endl;
//    cout << *(score_ptr + 1) << endl;
//    cout << *(score_ptr + 2) << endl;
//    
//    cout << "\nArray offset notation ----------------------" << endl;
//    cout << *scores << endl;
//    cout << *(scores + 1) << endl;
//    cout << *(scores + 2) << endl;
//    
//    cout << endl;
//
//    int scores [] {100, 95 ,89, 68, -1};
//    int *score_ptr {scores};
//    
//    while (*score_ptr != -1) {
//        cout << *score_ptr << endl;
//        score_ptr++;
//    }
//    
//    cout << endl;
//    
//    score_ptr = scores;
//    while (*score_ptr != -1)
//        cout << *score_ptr++ << endl;   //isto kao gore
//    
//    cout << endl;
//    
//    string s1 {"Frank"};
//    string s2 {"Frank"};
//    string s3 {"James"};
//    
//    string *p1 {&s1};
//    string *p2 {&s2};
//    string *p3 {&s1};
//    
//    cout << boolalpha;
//    cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl;
//    cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl;
//    
//    cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl;
//    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;
//    
//    cout << endl;
//    
//    p3 = &s3;
//    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;
//    
//    cout << endl;
//    
//    char name[] {"Frank"};
//    
//    char *char_ptr1{nullptr};
//    char *char_ptr2{nullptr};
//    
//    char_ptr1 = &name[0];
//    char_ptr2 = &name[3];
//    
//    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
//    
//    cout << endl;
//    
//    cout << "char_ptr2 is: " << *char_ptr2;
//    char_ptr2 -= 2;
//    cout << ", but after decrementing by 2: "<< *char_ptr2 << endl;
//    cout << endl;

    //Constants and pointers
    
    int high_score {100};
    int low_score {65};
    
    const int *score_ptr1 {&high_score};    //The data pointed to by the pointer is constant and cannot be changed
    
    //*score_ptr1 = 86;      //ERROR
    score_ptr1 = &low_score;     //OK
    
    int *const score_ptr2 {&high_score};    //The data pointed by the pointer can be changed but the pointer itself cannot change and point somewhere else
    
    *score_ptr2 = 86;       //OK
    //score_ptr2 = &low_score;    //ERROR
    
    const int *const score_ptr3 {&high_score};      //The data pointed by the pointer cant be changed and the pointer itself cannot change and point somewhere else
    
    //*score_ptr3 = 86;       //ERROR
    //score_ptr3 = &low_score;    //ERROR

    return 0;
}