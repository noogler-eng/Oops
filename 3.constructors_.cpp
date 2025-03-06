// can constructor can be final, static or abstract ?

#include<iostream>
using namespace std;

// No, a constructor cannot be final. 
// The final keyword in C++ applies only to virtual functions 
// and classes to prevent further overriding or inheritance.

// Constructors are not inherited or overridden, 
// so final does not make sense in this context.
// However, you can mark a class as final to prevent further inheritance.

class Movie final {
    public:
    Movie() { 
        cout<<"Movie constructor"<<endl; 
    }
};

// No, a constructor cannot be static in C++. 
// A static function belongs to a class, not an object, 
// but constructors are responsible for creating instances, 
// so it contradicts the concept.

// No, a constructor cannot be abstract. 
// In C++, a class becomes abstract if it contains at least 
// one pure virtual function (= 0), 
// but constructors themselves cannot be virtual.

class AbstractMovie {
public:
    // Abstract function
    virtual void showMovie() = 0; 
    // Allowed but not virtual
    AbstractMovie() { 
        cout << "AbstractMovie constructor"<<endl;
    } 
};

class ActionMovie : public AbstractMovie {
public:
    void showMovie() override { 
        cout << "Action Movie"<<endl;
    }
};

int main() {
    // AbstractMovie obj;
    // ERROR: Cannot instantiate abstract class
    ActionMovie am;
    am.showMovie();
}
