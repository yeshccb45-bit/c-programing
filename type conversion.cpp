#include<iostream>

int main(){

//type conversion is the process of converting a value from one data type to another. In C++, there are two types of type conversion: implicit and explicit. Implicit type conversion, also known as type casting, is performed automatically by the compiler when a value of one data type is assigned to a variable of another data type. For example, if an integer value is assigned to a double variable, the integer value will be automatically converted to a double value. Explicit type conversion, on the other hand, is performed manually by the programmer using type casting operators such as static_cast, dynamic_cast, const_cast, and reinterpret_cast. These operators allow the programmer to convert a value from one data type to another explicitly.
//example of implicit type conversion in C++:
//example of explicit type conversion in C++:



//implicit type conversion
//example of implicit type conversion in C++:
    int a=10;
    double b=a;//implicit type conversion from int to double
    std::cout<<"value of a is: "<<a<<std::endl;
    std::cout<<"value of b is: "<<b<<std::endl;


//explicit type conversion
//example of explicit type conversion in C++:
    double c=3.14;
    int d=int(c);//explicit type conversion from double to int 
    std::cout<<"value of c is: "<<c<<std::endl;   
    
    


    return 0;
}