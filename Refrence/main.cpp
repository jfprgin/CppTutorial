#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*void scale_number (int &num);
void swap (int &a, int &b);

int main() {
    int number {1000};
    int x {10}, y {20};
    
    scale_number(number);
    cout << number << endl;
    
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
    
    return 0;
}

void scale_number (int &num) {
    if (num > 100)
        num = 100;
}

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}*/

/*********************************************************************************************
 *                              vector                                                       *
 *                                                                                           *
 *********************************************************************************************/
 
//void print (const vector<int> &v);
//void print (const vector<string> &v);
//void pass_by_ref (vector<string> &v);
// 
// int main() 
// {
//     vector<int> data {1, 2, 3, 4, 5};
//     vector<string> stooges {"Larry", "Moe", "Curly"};
//     
//     print(stooges);
//     pass_by_ref(stooges);
//     print(stooges);
//     print(data);
//     
//     return 0;
// }
// 
//void print (const vector<int> &v) {
//    for (auto num : v)
//        cout << num << endl;
//}
//
//void print (const vector<string> &v) {
//    for (auto s : v)
//        cout << s << " ";
//    cout << endl;
//}
//
//void pass_by_ref (vector<string> &v) {
//    v.clear();
//}

/*********************************************************************************************
 *                              refrence pt2                                                 *
 *                                                                                           *
 *********************************************************************************************/
 
int main()
{
    int num {100};
    int &ref {num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num = 200;
    cout << "\n-------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    ref = 300;
    cout << "\n-------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n-------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    
    for (auto str : stooges)
        str = "Funny";      //str is a COPY of each vector element
    
    for (auto str : stooges)
        cout << str << endl;    //No changes
    
    cout << "\n-------------------------" << endl;
    for (auto &str : stooges)
        str = "Funny";      //str is a refrence to each vector element
    
    for (auto const &str : stooges)
        cout << str << endl;
        
    cout << endl;
    
    return 0;
}