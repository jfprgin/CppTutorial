#include <iostream>
#include <string>
#include <vector>

using namespace std;

//void double_data(int *int_ptr) {
//    *int_ptr *= 2;
//}
//
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void display(const vector<string> *const v) {
//    //(*v).at(0) = "Funny";
//    for (auto str : *v)
//        cout << str << " ";
//    cout << endl;
//    
//    //v = nullptr;
//}
//
//void display(const vector<string> &v) {
//    //(*v).at(0) = "Funny";
//    for (auto str : v)
//        cout << str << " ";
//    cout << endl;
//    
//    //v = nullptr;
//}
//
//void display(int *array, int sentinel) {
//    while (*array != sentinel)
//        cout << *array++ << " ";
//    cout << endl;
//}
//
//int main() {
//    int value {10};
//    int *int_ptr {nullptr};
//    
//    cout << "Value: " << value << endl;
//    double_data(&value);
//    cout << "Value: " << value << endl;
//    
//    cout << endl;
//    
//    int_ptr = &value;
//    double_data(int_ptr);
//    cout << "Value: " << value << endl;
//    
//    cout <<"\n---------------------------"<< endl;
//    
//    int x {100}, y {200};
//    cout << "\nx: " << x << endl;
//    cout << "y: " << y << endl;
//    
//    swap(&x, &y);
//    
//    cout << "\nx: " << x << endl;
//    cout << "y: " << y << endl;
//    
//    cout <<"\n---------------------------\n"<< endl;
//    
//    vector<string> stooges {"Larry", "Moe", "Curly"};
//    display(&stooges);
//    
//    cout <<"\n---------------------------\n"<< endl;
//
//    display(stooges);
//    
//    cout <<"\n---------------------------\n"<< endl;
//    
//    int scores[] {100, 98, 97, 79, 85, -1};
//    display(scores, -1);
//    
//    cout << endl;
//
//    return 0;
//}

int *create_array(size_t size, int init_value = 0) {
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i {0}; i < size; i++)
        *(new_storage + i) = init_value;
    return new_storage;
}
void dispaly(const int *const array, size_t size) {
    for (size_t i{0}; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int *my_array {nullptr};
    size_t size;
    int init_value {};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them to initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    
    cout << endl;
    
    dispaly(my_array, size);
    delete [] my_array;
    
    return 0;
}