#include<iostream>
#include<cmath>

int main() {
    double a ;
    double b ;

    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;

   // double square_root = sqrt( double(a));
    double power = pow(double(b), 2);

    //std::cout << "Square root of " << a << " is: " << square_root << std::endl;
    std::cout << b << " raised to the power of 2 is: " << power << std::endl;

    return 0;
}