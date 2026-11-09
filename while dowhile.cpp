#include<iostream>
int main(){
    //while loop
    int i = 0;      //while loop initialization
    while(i < 5){   //while loop condition
        std::cout << "While Loop Iteration: " << i << std::endl; //while loop body
        i++;        //while loop increment
    }
    //do while loop
    int j = 0;      //do while loop initialization
    do{
        std::cout << "Do While Loop Iteration: " << j << std::endl; //do while loop body
        j++;        //do while loop increment
    }while(j < 5);  //do while loop condition
    //while loop is used when the number of iterations is not known beforehand, and the loop may not execute at all if the condition is false initially. The do-while loop is used when the loop must execute at least once, regardless of the condition.
    //do while loop is useful when you want to ensure that the loop body is executed at least once, even if the condition is false initially. It is often used in scenarios where user input or some initial processing is required before checking the condition.
}