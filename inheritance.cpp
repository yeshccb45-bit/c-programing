//inheritance in c++
#include <iostream>
class Animal {
    public:
        void eat() {
            std::cout << "Animal is eating." << std::endl;
        }
};
class Dog : public Animal { // Dog class inherits from Animal class
    public:
        void bark() {
            std::cout << "Dog is barking." << std::endl;
        }
};
class Cat : public Animal { // Cat class inherits from Animal class
    public:
        void meow() {
            std::cout << "Cat is meowing." << std::endl;
        }
};
int main() {
    Dog dog;
    dog.eat(); // Inherited from Animal
    dog.bark(); // Specific to Dog
    Cat cat;
    cat.eat(); // Inherited from Animal
    cat.meow(); // Specific to Cat
    return 0;
}