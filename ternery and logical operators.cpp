#include<iostream>
using namespace std;
// This program demonstrates the use of ternary operator in C++
// The ternary operator is a shorthand for an if-else statement and is used to assign a value based on a condition
// The syntax of the ternary operator is: condition ? value_if_true : value_if_false

int main() {
    int a = 10;
    int b = 20;
    int c = (a > b) ? a : b;
    cout << "The maximum value is: " << c << endl;

    //logical operators are used to combine multiple conditions in C++
    int x = 5;
    int y = 10;
    if (x < 10 && y > 5) // logical AND operator
    //logical and operator (&&) returns true if both conditions are true, otherwise it returns false
     
    {
        cout << "Both conditions are true." << endl;
    }
    if (x < 10 || y < 5) // logical OR operator
    //logical or operator (||) returns true if at least one of the conditions is true, otherwise it returns false

    {
        cout << "At least one condition is true." << endl;
    }
    if (!(x < 10)) // logical NOT operator
    //logical not operator (!) returns true if the condition is false, and returns false if the condition is true
    {
        cout << "The condition is false." << endl;
    }
    else
    {
        cout << "The condition is true." << endl;
    }

    return 0;
}