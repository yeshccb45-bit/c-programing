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





    int month;
    std::cout<<"Enter month number (1-12): ";
    std::cin>>month;
    switch(month)//switch statement is used to check a variable against multiple values and execute a block of code based on the matching value
    {
        case 1:
            std::cout<<"January"<<std::endl;
            break;
        case 2:
            std::cout<<"February"<<std::endl;
            break;
        case 3:
            std::cout<<"March"<<std::endl;
            break;
        case 4:
            std::cout<<"April"<<std::endl;
            break;
        case 5:
            std::cout<<"May"<<std::endl;
            break;
        case 6:
            std::cout<<"June"<<std::endl;
            break;
        case 7:
            std::cout<<"July"<<std::endl;
            break;
        case 8:
            std::cout<<"August"<<std::endl;
            break;
        case 9:
            std::cout<<"September"<<std::endl;
            break;
        case 10:
            std::cout<<"October"<<std::endl;
            break;
        case 11:
            std::cout<<"November"<<std::endl;
            break;
        case 12:
            std::cout<<"December"<<std::endl;
            break;

        default://default statement is used to execute a block of code if none of the above cases match
            std::cout<<"Invalid month number."<<std::endl;

    }
    
    return 0;
}