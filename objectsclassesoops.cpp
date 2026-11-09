//object oriented programming in c++
#include <iostream>
//object - An object is an instance of a class that encapsulates data and behavior. It represents a real-world entity and can have attributes (data members) and methods (member functions) that define its characteristics and actions. Objects are created from classes, which serve as blueprints for creating multiple instances with similar properties and behaviors. In C++, objects are fundamental to object-oriented programming (OOP) and enable the implementation of concepts such as encapsulation, inheritance, and polymorphism.
//class - A class is a user-defined data type that serves as a blueprint for creating objects
// It defines the attributes (data members) and behaviors (member functions) that objects of that class will have. Classes allow for the organization of related data and functions into a single entity, promoting code reusability and modularity. In C++, classes are defined using the 'class' keyword, and they can include access specifiers (public, private, protected) to control the visibility of their members. Classes can also support features like constructors, destructors, inheritance, and polymorphism, making them a central concept in object-oriented programming (OOP).
class human {
    public:
        std::string name; // Member variable to store the name of the human
        int age; // Member variable to store the age of the human
        void introduce() { // Member function to introduce the human
            std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
        }
        void setName(const std::string& newName) { // Member function to set the name of the human
            name = newName;
        }
        void setAge(int newAge) { // Member function to set the age of the human
            age = newAge;
        }
        void address() { // Member function to display the address of the human
            std::cout << "I live in banglore." << std::endl;
        }
};
int main() {

    human person1; // Create an object of the human class
    person1.setName("yesh"); // Set the name of person1
    person1.setAge(21); // Set the age of person1
    person1.introduce(); // Call the introduce method for person1
    person1.address(); // Call the address method for person1

    human person2; // Create another object of the human class
    person2.setName("veer"); // Set the name of person2
    person2.setAge(22); // Set the age of person2
    person2.introduce(); // Call the introduce method for person2
    person2.address(); // Call the address method for person2


    return 0;
}
   