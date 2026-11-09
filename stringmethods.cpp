#include<iostream>
#include<string>
using namespace std;
// This program demonstrates the use of string methods in C++
int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // Length of the string
    cout << "Length of the string: " << str.length() << endl;

    // Accessing characters in the string
    cout << "First character: " << str[0] << endl;
    cout << "Last character: " << str[str.length() - 1] << endl;

    // Concatenation of strings
    string str2 = " How are you?";
    string concatenated = str + str2;
    cout << "Concatenated string: " << concatenated << endl;

    // Substring
    string substring = str.substr(7, 5); // starting from index 7, length 5
    cout << "Substring: " << substring << endl;

    // Finding a substring
    size_t found = str.find("World");
    if (found != string::npos) {
        cout << "'World' found at index: " << found << endl;
    } else {
        cout << "'World' not found." << endl;
    }

    // Replacing a substring
    str.replace(7, 5, "C++");
    cout << "String after replacement: " << str << endl;

    // Converting to uppercase
    for (char &c : str) {
        c = toupper(c);
    }
    cout << "Uppercase string: " << str << endl;

    // Converting to lowercase
    for (char &c : str) {
        c = tolower(c);
    }
    cout << "Lowercase string: " << str << endl;

    return 0;
}