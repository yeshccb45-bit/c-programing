//constructor in c++
#include <iostream>
class human {
    public:
        std::string name;
        int age;
        // Default constructor
        //default constructor is a special type of constructor that is automatically called when an object of a class is created without any arguments. It initializes the object's member variables to default values, ensuring that the object starts in a valid state. In C++, if no constructor is explicitly defined, the compiler provides a default constructor that performs default initialization for the member variables. However, if any other constructors are defined, the default constructor must be explicitly declared if needed. Default constructors are essential for creating objects with predictable initial states and can be used in conjunction with other constructors to provide flexibility in object creation.
        //example of default constructor
        human() {
            name = "Unknown";
            age = 0;
        }
        // Parameterized constructor
        //parameterized constructor is a special type of constructor that allows you to initialize an object with specific values at the time of its creation. It takes parameters that are used to set the initial state of the object's member variables. This provides flexibility in object initialization, allowing different instances of a class to have different initial values. In C++, parameterized constructors are defined with parameters in their declaration and can be overloaded to provide multiple ways to initialize an object. They enhance code readability and maintainability by encapsulating the initialization logic within the constructor, ensuring that objects are created in a valid state.
        //example of parameterized constructor
        human(const std::string& newName, int newAge) {
            name = newName;
            age = newAge;
        }
        void introduce() {
            std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
        }
};
int main() {
    human person1; // Calls the default constructor
    person1.introduce();

    human person2("veer", 22); // Calls the parameterized constructor
    person2.introduce();

    return 0;
}