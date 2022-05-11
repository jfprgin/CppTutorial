#include<iostream>
#include<climits>
#include<vector>
#include<iomanip>

using namespace std;

int main() {
    
//    char middle_initial {'J'};
//    cout << "My middle initial is " << middle_initial << endl;
//    
//    unsigned short int exam_score {55};
//    cout << "My exam score was " << exam_score << endl;
//    
//    long long  people_on_earth {7'600'000'000};
//    cout << "There are about " << people_on_earth << " people on earth" << endl;
//    
//    long double large_amount {2.7e120};
//    cout << large_amount << " is a very big number" << endl;
//    
//    bool game_over {false};
//    cout << "The value of gameOver is " << game_over << endl;
//    
//    short value1 {30000};
//    short value2 {1000};
//    short product {value1 * value2};
//    
//    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
//    
//    int room_width {0};
//    int room_length {0};
//    
//    cout << "Enter the width of the room: ";
//    cin >> room_width;
//    
//    cout << "Enter the length of the room: ";
//    cin >> room_length;
//    
//    cout << "The area of the room is " << room_length * room_width << " square feet" << endl;
    
//    cout << "Maximum value of int: " << INT_MAX << " bytes" << endl;
//    cout << "Minimum value of int: " << INT_MIN << " bytes" << endl;
//    
//    int age {21};
//    cout << "size of age is: " << sizeof(age) << " bytes" << endl;
//    cout << "size of age is: " << sizeof age << " bytes" << endl;

/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/
    
//    char vowels[] {'a', 'e', 'i', 'o', 'u'};
//    cout << vowels[0] << endl;
//    
//    int test [5] {}; //sve su nule, inače je smeće ako nema {}
//    
//    const int n = 1;
//    int test2 [n];
//    
//    int test3 [rows] [columns];
//    
//    vector <int> test_scores (10); //all elements automatically set to 0
//    vector <char> vowels_vector {'a', 'e', 'i', 'o', 'u'};
//    vector <double> hi_temperatures (365, 80.0); //inital size of vector, what you initalize all the elements too
//    
//    cout << "First vowel in the vector: " << vowels_vector.at(0) << endl; // or vowels_vector[0]
//    
//    vowels_vector.push_back('r');
//    
//    cout << "There are " << vowels_vector.size() << " elements in the vector" << endl;

/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/
   
//    vector <vector<int>> movie_ratings
//    {
//        {1, 2, 3, 4},
//        {1, 3, 2, 4},
//        {1, 3, 4, 5}
//    };
//    
//    cout << "Movie ratings for reviewer #1: " << endl;
//    cout << movie_ratings.at(0).at(0) << endl;  // ili movie_ratings[0][0]
//    cout << movie_ratings.at(0).at(1) << endl;
//    cout << movie_ratings.at(0).at(2) << endl;
//    cout << movie_ratings.at(0).at(3) << endl;
//
//    vector<int> vector1;
//    vector<int> vector2;
//    vector<vector<int>> vector_2d;
//    
//    vector1.push_back(10);
//    vector1.push_back(20);
//    cout << "Vector 1 has " << vector1.size() << " elements: " << vector1.at(0) << ", "<< vector1.at(1) << endl;
//    
//    vector2.push_back(100);
//    vector2.push_back(200);
//    cout << "Vector 2 has " << vector2.size() << " elements: " << vector2.at(0) << ", "<< vector2.at(1) << endl;
//    
//    vector_2d.push_back(vector1);
//    vector_2d.push_back(vector2);
//    cout << "Vector 2D has " << vector_2d.size() << " elements: " << endl;
//    cout << vector_2d.at(0).at(0) << ", "<< vector_2d.at(0).at(1) << endl;
//    cout << vector_2d.at(1).at(0) << ", "<< vector_2d.at(1).at(1) << endl;
//
//    int counter1 {10};
//    int result1 {0};
//    
//    cout << "Prefix increment" << endl;
//    cout << "Counter: " << counter1 << endl;
//    
//    result1 = ++counter1; //prvo inkrementira pa onda sprema u result1
//    cout << "Counter: " << counter1 << endl;
//    cout << "Result: " << result1 << endl;
//    
//    int counter2 {10};
//    int result2 {0};
//    
//    cout << "\nPostfix increment" << endl;
//    cout << "Counter: " << counter2 << endl;
//    
//    result2 = counter2++; // prvo sprema u result2 pa tek onda inkrementira
//    cout << "Counter: " << counter2 << endl;
//    cout << "Result: " << result2 << endl;
//
//    int total {};
//    int num1 {}, num2 {}, num3 {};
//    const int count {3};
//    
//    total = num1 + num2	+ num3;
//    
//    double average {0.0};
//    
//    average = static_cast<double>(total) / count; // average =(double)total / count old-style

/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/
 
//    int n {};
//    int balance {};
//    int dollar {}, quarter {}, dime {}, nickel {}, penny {};
//    const int dollar_value {100}, quarter_value {25}, dime_value {10}, nickel_value {5};
//    
//    cout << "Enter an amount in cents: ";
//    cin >> n;
//    
//    dollar = n / dollar_value;
//    cout << "Dollars: " << dollar << endl;
//    
//    balance = n % dollar_value;
//    quarter = balance / quarter_value;
//    cout << "Quarters: " << quarter << endl;
//    
//    balance = balance % quarter_value;
//    dime = balance / dime_value;
//    cout << "Dimes: " << dime << endl;
//    
//    balance = balance % dime_value;
//    nickel = balance / nickel_value;
//    cout << "Nickels: " << nickel << endl;
//    
//    balance = balance % nickel_value;
//    penny = balance;
//    cout << "Pennies: " << penny << endl;

/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/

//    char letter_grade {};
//    
//    cout << "Enter the letter grade you expect on the exam: ";
//    cin >> letter_grade;
//    
//    switch(letter_grade) {
//        case 'a':
//        case 'A':
//            cout << "You need 90 or above for A!" << endl;
//            break;
//        case 'b':
//        case 'B':
//            cout << "You need 80-89 for B!" << endl;
//            break;
//        case 'c':
//        case 'C':
//            cout << "You need 70-79 for C!" << endl;
//            break;
//        case 'd':
//        case 'D':
//             cout << "You need 60-69 for D!" << endl;
//             break;
//        case 'f':
//        case 'F': 
//        {
//            char confirm {};
//            cout << "Are you sure (Y/N)? ";
//            cin >> confirm;
//            
//            if (confirm == 'y' || confirm == 'Y' )
//                cout << "OK." << endl;
//            else if (confirm == 'n' || confirm == 'N')
//                cout << "Good!" << endl;
//            else
//                cout << "Illegal choice!" << endl;
//            break;
//        }
//        default:
//            cout << "Sorry, not a valid grade!" << endl;
//    }
//    
//    cout << endl;
//    
//    enum Direction {
//        left, right, up, down
//    };
//    
//    Direction heading (left);
//    
//    switch(heading) {
//        case left:
//            cout << "Going left!" << endl;
//            break;
//        case right:
//            cout << "Going right!" << endl;
//            break;
//        default:
//            cout << "OK" << endl;
//    }
//    
//    int day_code {}
//    cin >> day_code;
//    
//    switch(day_code)
//    {
//        case 0:
//            cout << "Sunday";
//            break;
//        case 1:
//            cout << "Monday" << endl;
//            break;
//        case 2:
//            cout << "Tuesday" << endl;
//            break;
//        case 3:
//            cout << "Wednesday" << endl;
//            break;
//        case 4:
//            cout << "Thursday" << endl;
//            break;
//        case 5:
//            cout << "Friday" << endl;
//            break;
//        case 6:
//            cout << "Saturday" << endl;
//            break;
//        default:
//            cout << "Error - illegal day code" << endl;
//            break;
//    }

/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/
   
//    int num;
//    
//    cout << "Enter an integer: ";
//    cin >> num;
//    
//   cout << num << " is " << ((num % 2 == 0) ? "even" : "odd" ) << endl;
//   cout << endl;
//   
//    int num1{}, num2{};
//    
//    cout << "Enter two number separated by a space: ";
//    cin >> num1 >> num2;
//    
//    if ( num1 != num2 ) {
//        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
//        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
//    }
//    else
//        cout << "Numbers are the same!" << endl;

/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/
    
//    vector<int> nums {10, 20, 30, 40, 50};
//    for (unsigned i {0}; i < nums.size(); i++)
//        cout << nums[i] << endl;
//    
//    for (int i{1}, j{5}; i <= 5; i++, j++)
//        cout << i <<" + " << j << " = " << i + j << endl;
//    
//    int scores[] {10, 20, 30};
//    
//    for (auto score : scores)
//        cout << score << endl;
//        
//    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
//    double average_temp {};
//    double total {};
//    
//    for (auto temp : temperatures)
//        total += temp;
//    
//    if (temperatures.size() != 0)
//        average_temp = total / temperatures.size();
//    
//    cout << fixed << setprecision(1);
//    cout << "Average temperature: " << average_temp << endl;

/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/

//    int num {};
//    cout << "Enter a positive integer: ";
//    cin >> num;
//    
//    int i {1};
//    while (num >= i) {
//        cout << i << endl;
//        i++;
//    }
//    
//    bool done {false};
//    int number {};
//    
//    while (!done) {
//        cout << "Enter an integer between 1 and 5: ";
//        cin >> number;
//        if (number <= 1 || number >= 5)
//            cout << "Out of range, try again!" << endl;
//        else {
//            cout << "Thanks!" << endl;
//            done = true;
//        }
//            
//    }
    
/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/
    
//    char selection {};
//    do {
//        cout << "\n----------------" << endl;
//        cout << "1. Do this" << endl;
//        cout << "2. Do that" << endl;
//        cout << "1. Do something else" << endl;
//        cout << "Q. Quit" << endl;
//        cout << "\nEnter your selection :";
//        cin >> selection;
//        
//        if (selection == '1')
//            cout << "You chose 1 - Do this" << endl;
//        else if (selection == '2')
//            cout << "You chose 2 - Do that" << endl;
//        else if (selection == '3')
//            cout << "You chose 1 - Do something else" << endl;
//        else if (selection == 'q' || selection == 'Q')
//            cout << "Goodbye!" << endl;
//        else
//            cout << "Unknown option - try again!" << endl;
//    }
//    while (selection != 'q' && selection != 'Q');

/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/    
   
//    vector<vector<int>> vector_2d
//    {
//        {1, 2, 3},
//        {10, 20, 30, 40},
//        {100, 200, 300, 400, 500}
//    };
//    
//    for (auto vec : vector_2d) {
//        for (auto val : vec )
//            cout << val << " ";
//        cout << endl;
//    }
//    
//    cout << endl;
//    
//    int num_items {};
//    
//    cout << "How many data items do you have? ";
//    cin >> num_items;
//    
//    vector<int> data {};
//    
//    for (int i {1}; i <= num_items; i++) {
//        int data_item {};
//        cout << "Enter data item " << i << " : ";
//        cin >> data_item;
//        data.push_back(data_item);
//    }
//    
//    cout << "\nDisplaying Histogram" << endl;
//    for (auto val : data) {
//        for (int i {1}; i <= val; i++) {
//            if (i % 5 == 0)
//                cout << "*";
//            else
//                cout << "-";
//        }
//        cout << endl;
//    }
//    
//    vector<int> vec {2, 4, 6, 8};
//    int result {};
//    
//    for (unsigned i {0}; i < vec.size() - 1; i++)
//        for (unsigned j {i + 1}; j < vec.size(); j++)
//            result += vec[i] * vec[j];
//    
//    cout << result << endl;

/*********************************************************************************************
 *                                                                                           *
 *                                                                                           *
 *********************************************************************************************/    
    
    char choice {};
    vector<int> vec {};
    
    cout << "P - Print numbers" << endl;
    cout << "A - Add number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "D - Delete all numbers in the list" << endl;
    cout << "C - Count the number of times an integer occurs in the list" << endl;
    cout << "Q - Quit" << endl;
    
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        if (choice == 'p' || choice == 'P') {
            if (vec.size() != 0) {
                cout << "\n[";
                for (auto number : vec)
                    cout << " " << number;
                cout << " ]\n";
            }
            else
                cout << "[] - this list is empty!"<< endl;
        }
                
        else if (choice == 'a' || choice == 'A') {
            int n {};
            bool loop {false};
            while (!loop) {
                cout << "\nEnter an integer to add to the list: ";
                cin >> n;
                loop = true;
                for (auto number : vec)
                    if (n == number) {
                        loop = false;
                        cout << "Integer already exists, try again!" << endl;
                        break;
                    }
            }
            vec.push_back(n);
            cout << n << " added" << endl;
        }
        
        else if (choice == 'm' || choice == 'M') {
            int sum {};
            if (vec.size() != 0) {
                for (auto number : vec)
                    sum += number;
                cout << "\nThe mean is: " << static_cast<double>(sum) / vec.size()<< endl;
            }
             else
                cout << "Unable to calculate, no data!" << endl;
        }
        
        else if (choice == 'l' || choice == 'L') {
            int max {};
            if (vec.size() != 0) {
                for (auto number : vec)
                    if (number > max)
                        max = number;
                cout << "\nThe largest number is: " << max << endl;
            }
             else
                cout << "Unable to calculate, no data!" << endl;
        }
        
        else if (choice == 's' || choice == 's') {
            int min {};
            if (vec.size() != 0) {
                min = vec.at(0);
                for (auto number : vec)
                    if (number < min)
                        min = number;
                cout << "\nThe smallest number is: " << min << endl;
            }
            else
                cout << "Unable to calculate, no data!" << endl;
        }
        
        else if (choice == 'd' || choice == 'd')
            vec.clear();
            
        else if (choice == 'c' || choice == 'C') {
            int n {}, count {};
            cout << "\nEnter number you want to find: ";
            cin >> n;
            for(auto number : vec)
                if (n == number)
                    count++;
            cout << "Number " << n << " occurs " << count << " times in the list" << endl;
        }
        
        else if (choice == 'q' || choice == 'Q')
            cout <<"Goodbye!" << endl;
      
        else
            cout << "Unknown selection, please try again!" << endl;
    } 
    while (choice != 'q' && choice != 'Q');
    
    return 0;
}