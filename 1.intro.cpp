// Oops is programmming padigram, that organise the code into objects, which 
// represents real world enteties. it allows developers to break the complex
// code or problem into smaller, managable peices. blueprint(reusaable code)

// car is class
// specific car is object (real world enteties, instance ..., object)

#include<iostream>
using namespace std;

class Car {
    // access modifier
    public:

    // attributes, properties
    string manufacturer;
    string model;
    int year;

    // constructor
    // features 
    // 1. automatic invocation
    // 2. no return type
    // 3. overloading support
    Car(string _manufacturer, string _model, int _year){
        this->manufacturer = _manufacturer;
        this->model = _model;
        this->year = _year;
    }

    // function, methods, behavious .....
    void startEngine(){
        cout<<"the "<<this->year<<" "<<this->manufacturer<<" "<<this->model<<" 's engine has been started"<<endl;
    }

    void displayInfo(){
        cout<<this->year<<" "<<this->manufacturer<<" "<<this->model<<endl;
    }
};

int main(){
    Car creta = Car("Maruti", "2018", 2019);
    creta.startEngine();
    creta.displayInfo();
    return 0;
}
