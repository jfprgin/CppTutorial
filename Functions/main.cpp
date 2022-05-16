#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

/**************************************************
 *                  default arguments                          *
 **************************************************/
//
//double calc_cost (double base_cost, double tax_rate = 0.06, double shipping = 3.50);
//
//void greeting(string name, string prefix = "Mr.", string suffix = "" );
//
//double calc_cost (double base_cost, double tax_rate, double shipping) {
//    return base_cost += (base_cost * tax_rate) + shipping;
//}
//
//void greeting(string name, string prefix, string suffix) {
//    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
//}
//
//int main(int argc, char **argv)
//{
//    double cost {0};
//    
//    cost = calc_cost(200.0);
//    cout << cost << endl;
//    
//    cost = calc_cost(100.0, 0.08);
//    cout << cost << endl;
//    
//    cost = calc_cost(100.0, 0.08, 4.25);
//    cout << cost << endl;
//    
//    greeting("Glenn Jones", "Dr.", "M.D.");
//    greeting("James Rogers" , "Professor");
//    greeting("Frank Miller");
//    
//	return 0;
//}

/**************************************************
 *                  overloading functions                     *
 **************************************************/

//void print(int);
//void print(double);
//void print(string);
//void print(string, string);
//void print(vector<string>);
//
//void print(int num){
//    cout << "Print int: " << num << endl;
//}
//
//void print(double num){
//    cout << "Print double: " << num << endl;
//}
//
//void print(string s){
//    cout << "Print string: " << s << endl;
//}
//
//void print(string s, string t){
//    cout << "Print 2 strings: " << s << " and " << t <<  endl;
//}
//void print(vector<string> v){
//    cout << "Printing vector of strings: ";
//    for (auto s: v)
//        cout << s + " ";
//    cout << endl;
//}
//
//int main(int argc, char **argv)
//{
//    print(100);
//    print('A');     //character is always promoted to int, should print 65 ASCII ('A')
//    
//    print(123.5);
//    print(123.3F);      //float is promoted to double
//    
//    print("C-style string");        // C-style string is converted to C++ string
//    
//    string s {"C++ string"};
//    print(s);
//    
//    print("C-style string", s);     // C-style string is converted to C++ string
//    
//    vector<string> three_stooges{"Larry", "Moe", "Curly"};
//    print(three_stooges);
//    
//    cout << endl;
//    
//    return 0;
//}

/**************************************************
 *                  passing arrays to func                   *
 **************************************************/
 
//void no_const_print_array(int arr[], size_t size);
//void print_array(const int arr[], size_t size);      //const so the function doesnt change the array
//void set_array(int arr[], size_t size, int value);
// 
//void print_array(const int arr[], size_t size)
//{
//    for (size_t i{0}; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//void no_const_print_array(int arr[], size_t size)
//{
//    for (size_t i{0}; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//    arr[0] = 5000;
//}
//
//void set_array(int arr[], size_t size, int value)
//{
//    for (size_t i{0}; i < size; i++)
//        arr[i] = value;
//}
//
//int main()
//{
//    int my_scores[] {100, 98, 90, 86, 84};
//    
//    print_array(my_scores, 5);
//    set_array(my_scores, 5, 100);
//    no_const_print_array(my_scores, 5);
//    print_array(my_scores, 5);
//    
//    return 0;
//}

/**************************************************
 *                  pass by refrence                             *
 **************************************************/
 //na laptopu
 
 /**************************************************
 *                              scopes                                  *
 **************************************************/
 //na laptopu
 
 /**************************************************
 *                          recursion                                  *
 **************************************************/
 
 unsigned long long factorial(unsigned long long);
 unsigned long long fibonacci(unsigned long long);
 
 unsigned long long factorial(unsigned long long n)
 {
     if (n == 0)
         return 1;
    return n * factorial(n - 1);
 }
 
 unsigned long long fibonacci(unsigned long long n)
 {
     if (n <= 1)
         return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
 }
 
 int main()
 {
     cout << factorial(3) << endl;
     cout << fibonacci(5);
     
     return 0;
 }