#include<iostream>
using std::cout;
using std::cin;
using std::endl;  
int main(){
    int a;
    int b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
   
    int sum=a+b;//arithmetic operations in C++ are performed using operators such as +, -, *, /, and %. The + operator is used for addition, the - operator is used for subtraction, the * operator is used for multiplication, the / operator is used for division, and the % operator is used for modulus (remainder) operation. These operators can be used with different data types such as integers, floating-point numbers, and characters. The result of an arithmetic operation can be stored in a variable or used directly in an expression.
    int sub=b-a;//subtraction operation is performed using the - operator. It takes two operands and returns the difference between them. The result of the subtraction operation can be stored in a variable or used directly in an expression. The subtraction operator can be used with different data types such as integers, floating-point numbers, and characters.
    int mul=a*b;//multiplication operation is performed using the * operator. It takes two operands and returns the product of them. The result of the multiplication operation can be stored in a variable or used directly in an expression. The multiplication operator can be used with different data types such as integers, floating-point numbers, and characters.
    double div=(double)b/a;//division operation is performed using the / operator. It takes two operands and returns the quotient of them. The result of the division operation can be stored in a variable or used directly in an expression. The division operator can be used with different data types such as integers, floating-point numbers, and characters. When performing division with integers, the result will be an integer (the fractional part will be discarded). To get a floating-point result, at least one of the operands must be a floating-point number.

    
    cout<<"sum is: "<<sum<<endl;
    cout<<"sub is: "<<sub<<endl;
    cout<<"mul is: "<<mul<<endl;
    cout<<"div is: "<<div<<endl;

//modulus operator is used to find the remainder of a division operation. It is represented by the symbol %. The modulus operator can be used with integer data types, and it returns the remainder of the division of the first operand by the second operand. For example, if we have two integers a and b, then a % b will return the remainder when a is divided by b. The modulus operator is often used in programming to check if a number is even or odd, or to perform operations that require wrapping around a certain range of values.
    //int mod1=a%2;    
    //cout<<"mod is: "<<mod1<<endl;
    //int mod2=b%2;
    //cout<<"mod is: "<<mod2<<endl;

    //maximum and minimum of two numbers can be found using the ternary operator. The ternary operator is a shorthand way of writing an if-else statement. It takes three operands: a condition, a value to return if the condition is true, and a value to return if the condition is false. The syntax for the ternary operator is as follows:
    //example of maximum and minimum of two numbers using the ternary operator in C++:
    ////int max(a,b);//maximum of two numbers using ternary operator
    //int min(a,b);//minimum of two numbers using ternary operator
    //cout<<"maximum of two numbers is: "<<max<<endl; 
    //cout<<"minimum of two numbers is: "<<min<<endl;
    //square of a number can be found using the pow() function from the cmath library. The pow() function takes two arguments: the base and the exponent, and returns the value of the base raised to the power of the exponent. The syntax for the pow() function is as follows:
    //example of square of a number using the pow() function in C++:    
    //pow is used to find the power of a number. It is a mathematical function that takes two arguments: the base and the exponent. The pow() function returns the value of the base raised to the power of the exponent. The pow() function can be used with different data types such as integers, floating-point numbers, and characters. The syntax for the pow() function is as follows:
    // double square=pow(a,2);//square of a number using pow() function
    //cout<<"square of a is: "<<square<<endl;
    //cube of a number can be found using the pow() function from the cmath library. The pow() function takes two arguments: the base and the exponent, and returns the value of the base raised to the power of the exponent. The syntax for the pow() function is as follows:
    //double cube=pow(b,3);//cube of a number using pow() function
    // cout<<"cube of b is: "<<cube<<endl;
    //square root of a number can be found using the sqrt() function from the cmath library. The sqrt() function takes one argument: the number, and returns the square root of the number. The syntax for the sqrt() function is as follows:
    //double square_root=sqrt(a);//square root of a number using sqrt() function  
    //absolute value of a number can be found using the abs() function from the cmath library. The abs() function takes one argument: the number, and returns the absolute value of the number. The syntax for the abs() function is as follows:
    //double absolute_value=abs(b);//absolute value of a number using abs() function

    return 0;
}  
