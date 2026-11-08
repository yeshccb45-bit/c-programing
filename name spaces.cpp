#include<iostream>

  namespace first{
        int x=5;
        int y=10;
    }
    namespace seccond{
        int x=5;
        int y=300;
    }
    
    int main(){
    //namespace   == unique name to identify a variable or function
    //namespace is used to avoid name conflicts in large projects   
    //a namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.
    //namespace is a collection of classes, objects and functions which are grouped together under a name   
    //namespace allows us to group named entities that otherwise would have global scope into narrower scopes, which helps avoid name collisions.
    int sum;
        sum=first::x+seccond::y;
    std::cout<<"value of x is: "<<first::x<<std::endl;
    std::cout<<"value of y is: "<<seccond::y<<std::endl;
    std::cout<<"sum = "<<sum<<std::endl;

    using std::cout;//alternative to using namespace std;
    using std::endl;//alternative to using namespace std;

    cout<<"hello world"<<endl;

    
    return 0;
}