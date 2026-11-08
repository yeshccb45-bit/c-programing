#include<iostream>
int main(){
    
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;


    if(age >= 18)//if statement is used to check a condition and execute a block of code if the condition is true
    {
        std::cout<<"You are eligible to vote."<<std::endl;
    }
    else if(age < 18)//else if statement is used to check another condition if the first condition is false
    {
        std::cout<<"You are not eligible to vote."<<std::endl;
    }
   else//else statement is used to execute a block of code if all the above conditions are false
    {
        std::cout<<"Invalid age."<<std::endl;
    }
    return 0;
}