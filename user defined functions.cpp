#include<iostream>
//functions are blocks of code that perform a specific task and can be reused throughout a program. They help in organizing code, improving readability, and reducing redundancy. Functions can take input parameters, perform operations, and return a value. In C++, functions are defined with a return type, a name, and a parameter list. They can be called from other parts of the program to execute the defined task.
//function definition
int add(int a, int b) //function definition with parameters
//function body
{
    return a + b; //return statement
}
//user-defined functions allow programmers to create their own functions to encapsulate specific functionality, making the code more modular and easier to maintain. They can be defined with various return types and can accept multiple parameters, enabling flexibility in how they are used within a program.
//function declaration
//function declaration (also known as function prototype) informs the compiler about the function's name, return type, and parameters before its actual definition. This allows the function to be called before it is defined in the code, enabling better organization and separation of function declarations and definitions.
//example of user-defined function declaration
int multiply(int a, int b); //function declaration with parameters

int main() {
    int a = 5;
    int b = 10;
    //function call
    int sum = add(a,b); //function call with arguments
    std::cout << "Sum: " << sum << std::endl; 
    //output the result
    //function call for user-defined function
    int product = multiply(a,b); //function call with arguments
    std::cout << "Product: " << product << std::endl; //output the result

    return 0;
}

int multiply(int a, int b) {
    return a * b;
}