//structures.cpp
#include <iostream>
#include <string>
struct student {
    // A structure is a user-defined data type in C++ that allows grouping of variables of different types under a single name. It is used to represent a record, such as a student, with multiple attributes. Structures are useful for organizing related data and can be passed to functions, returned from functions, and used in arrays. In this example, we define a structure named 'student' that contains member variables for the student's name, age, GPA, and enrollment status. Each instance of the structure can hold information for a different student.
    // Member variables of the structure
    // The member variables are defined within the structure and can be accessed using the dot operator (.) on instances of the structure. They can hold different types of data, such as strings, integers, floats, and booleans, allowing for a comprehensive representation of a student's information.
    // The structure can be used to create multiple instances, each representing a different student, and their information can be easily managed and manipulated through the structure's member variables.
    std::string name; // Member variable to store the student's name
    int age; // Member variable to store the student's age
    float gpa; // Member variable to store the student's GPA
    bool isEnrolled; // Member variable to indicate if the student is currently enrolled

};
int main() {
    student s1; // Create an instance of the student structure
    s1.name = "yesh"; // Assign a value to the name member variable
    s1.age = 21; // Assign a value to the age member variable
    s1.gpa = 9.9; // Assign a value to the gpa member variable
    s1.isEnrolled = true; // Assign a value to the isEnrolled member variable


    student s2; // Create another instance of the student structure
    s2.name = "veer"; // Assign a value to the name member variable 
    s2.age = 22; // Assign a value to the age member variable
    s2.gpa = 8.5; // Assign a value to the gpa member variable
    s2.isEnrolled = false; // Assign a value to the isEnrolled member variable

    // Output the values of the structure's member variables
    std::cout << "Student Name: " << s1.name << std::endl;
    std::cout << "Student Age: " << s1.age << std::endl;
    std::cout << "Student GPA: " << s1.gpa << std::endl;
    std::cout << "Is Student Enrolled? " << (s1.isEnrolled ? "Yes" : "No") << std::endl;

    std::cout << "Student Name: " << s2.name << std::endl;
    std::cout << "Student Age: " << s2.age << std::endl;
    std::cout << "Student GPA: " << s2.gpa << std::endl;
    std::cout << "Is Student Enrolled? " << (s2.isEnrolled ? "Yes" : "No") << std::endl;

    //passing structure to a function
    auto printStudentInfo = [](const student& s) {
        std::cout << "Student Name: " << s.name << std::endl;
        std::cout << "Student Age: " << s.age << std::endl;
        std::cout << "Student GPA: " << s.gpa << std::endl;
        std::cout << "Is Student Enrolled? " << (s.isEnrolled ? "Yes" : "No") << std::endl;
    };
    printStudentInfo(s1);
    printStudentInfo(s2);
    //

    return 0;
}