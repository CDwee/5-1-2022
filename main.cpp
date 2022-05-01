// Started at 9:22 5-1-2022

// Section 9
// Switch Statement

#include <iostream>

using namespace std;

int main() {
    
    char letter_grade{};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    
    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89 for a B, go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You 70-79 for an average grade" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Hmm, you should strive for a better grade. All you need is 60-69" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "Are you sure (Y/N)? ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout << "Okay, I guess you don't want to study..." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good - go study!" << endl;
            else 
                cout << "Illegal choice" << endl;
            break;   
        }
        default:
            cout << "Sorry, not a valid grade" << endl;
    }
    
    cout << endl;
    return 0;
}

// Section 9
// Switch with enumeration

#include <iostream>

using namespace std;

int main() {
    
    enum Direction {
        left, right, up, down
    };
    
    Direction heading {left};
    
    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right: 
            cout << "Going right" << endl;
            break;
        default:
            cout << "Okay" << endl;
            
    }
    
    cout << endl;
    return 0;
}

// Section 9
// Conditional Operator
#include <iostream>

using namespace std;

int main() {
    
//    int num {};
//    
//    cout << "Enter an integer: ";
//    cin >> num;
//    
//    if (num % 2 == 0)
//        cout << num << " is even" << endl;
//    else 
//        cout << num << " is odd" << endl;
//        
//    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

    int num1{}, num2{};
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    if (num1 != num2) {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << "The numbers are the same" << endl;
    }
    
    cout << endl;
    return 0;
}

// Section 9
// For loop
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
//    for (int i{1}; i <= 10; ++i)
//        cout << i << endl;
    
//    for (int i{1}; i <= 10; i+=2)
//        cout << i << endl;
    
//    for (int i{10}; i > 0; --i)
//        cout << i << endl;
//        cout << "Blastoff!" << endl;

//    for (int i{10}; i<=100; i+=10) {
//        if (i % 15 == 0)
//            cout << i << endl;
// }

//    for (int i{1}, j{5}; i<=5;  ++i, ++j)
//        cout << i << " + " << j << " = " << (i+j) << endl;

//    for (int i{1}; i<=100; ++i) {
//        cout << i;
//    if (i % 5 == 0)
//        cout << endl;
//    else 
//        cout << " ";
//    }

//    for (int i{1}; i <= 100; i++) {
//        cout << i << ((i % 10 == 0) ? "\n" : " ");
//    }
//
    
    vector<int> nums {10,20,30,40,50};
    for (unsigned int i{0}; i< nums.size(); ++i)
        cout << nums[i] << endl;
    
    
    

    cout << endl;
    return 0;
}

// Section 9
// Range-based For loop
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    
//    int scores [] {10, 20, 30};
//    
//    for (auto score: scores)
//        cout << score << endl;

//    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
//    double average_temp {};
//    double total {};
//    
//    for (auto temp: temperatures) 
//        total += temp;
//        
//    if (temperatures.size() != 0)
//        average_temp = total / temperatures.size();
//        
//    cout << fixed << setprecision(1);
//    cout << "Average temperature is " << average_temp << endl;

//    for (auto val: {1,2,3,4,5})
//        cout << val << endl;

//    for (auto c: "This is a test")
//        if (c != ' ')
//            cout << c;

    for (auto c: "This is a test")
        if (c == ' ')
            cout << "\t";
        else 
            cout << c;
     
   
    cout << endl;
    return 0;
}

// Ended at 11:30 5-1-2022
