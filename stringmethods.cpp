#include<iostream>
#include<string>
using namespace std;
// This program demonstrates the use of string methods in C++
int main() {
    string str = "Hello, World!";
    
    // Length of the string
    cout << "Length of the string: " << str.length() << endl;

    // Accessing characters in the string
    cout << "First character: " << str[0] << endl;
    cout << "Last character: " << str[str.length() - 1] << endl;

    // Concatenation of strings
    string str2 = " How are you?";
    string result = str + str2;
    cout << "Concatenated string: " << result << endl;

    // Substring
    string substr = str.substr(7, 5); // starting from index 7, length 5
    cout << "Substring: " << substr << endl;

    // Finding a substring
    string::size_type found = str.find("World");
    if (found != string::npos) {
        cout << "'World' found at index: " << found << endl;
    } else {
        cout << "'World' not found." << endl;
    }

    // Replacing a substring
    str.replace(7, 5, "C++");
    cout << "After replacement: " << str << endl;

    //empty check
    if(str.empty()){
        cout << "The string is empty." << endl;
    } else {
        cout << "The string is not empty." << endl;
    }
    // Clearing the string
    str.clear();
    cout << "After clearing, length of the string: " << str.length() << endl;
    //append
    //str.append("New String");
    //cout << "After appending, the string is: " << str << endl; 
    //insert
    ////str.insert(4, " Inserted");
    //cout << "After inserting, the string is: " << str << endl;
    //erase
    //str.erase(4, 9); // Erase 9 characters starting from index 4
    // cout << "After erasing, the string is: " << str << endl;

return 0;
}