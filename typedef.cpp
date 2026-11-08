#include<iostream>
#include<vector>
//typedef is used to create an alias for a data type. It allows you to give a new name to an existing data type, making the code more readable and easier to understand. The syntax for typedef is as follows:
//typedef existing_data_type new_data_type_name;
//using keyword is used to create an alias for a data type. It allows you to give a new name to an existing data type, making the code more readable and easier to understand. The syntax for using is as follows:
//using new_data_type_name = existing_data_type;
//example of typedef and using keyword in C++:
typedef unsigned int uint; // create an alias for unsigned int  
using uint2 = unsigned int; // create an alias for unsigned int using the using keyword
using std::cout;
using std::endl;
int main() {
    uint a = 10; // using typedef alias
    uint2 b = 20; // using using alias
    cout << "value of a is: " << a<< endl;
    cout << "value of b is: " << b << endl;
    return 0;
}