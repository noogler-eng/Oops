// there are different types of constructors
// 1. Default constructors (No argument constructors)
// 2. argumented constructors (parameterised constructor)
// 3. copy constructor
// 4. private constructors

#include<iostream>
using namespace std;

class Movie {
    // private:
    public:
    string title;
    int durationInHours;

    public: 
    // no argument constructor
    Movie(){
        cout<<"constructor running"<<endl;
    }

    // copy constructor
    Movie(const Movie &other){
        this->title = other.title;
        this->durationInHours = other.durationInHours;
    }

    void setMovie(string _title, int _duration){
        this->title = _title;
        this->durationInHours = _duration;
    }

    void movieInfo(){
        cout<<"movie name: "<<this->title<<" movie duration: "<<this->durationInHours<<endl;
    }
};


class Car {
    public:
    string manufacturer;
    string model;
    int year;

    // argumented constructor
    Car(string _manufacturer, string _model, int _year = 2000){
        this->manufacturer = _manufacturer;
        this->model = _model;
        this->year = _year;
    }

    void startEngine(){
        cout<<"the "<<this->year<<" "<<this->manufacturer<<" "<<this->model<<" 's engine has been started"<<endl;
    }

    void displayInfo(){
        cout<<this->year<<" "<<this->manufacturer<<" "<<this->model<<endl;
    }
};

class Food {
    private:
    // this is private constructor
    Food(){}
    
    public:
    int value;
    void set(int value){
        this->value = value;
    }

    static Food createFood(){
        return Food();
    }

    void infoFood(){
        cout<<"this is food info funtion"<<endl;
    }
};

int main(){
    // example 1
    Movie chavva;
    chavva.setMovie("chavva", 2);
    chavva.movieInfo();

    Movie anotherOne = Movie(chavva);
    anotherOne.movieInfo();

    // deep copy (changes are not copies here)
    Movie anotherAnotherOne = anotherOne;
    anotherAnotherOne.movieInfo();

    // copy by reference (changes are copied here)
    Movie* anotherAnotherAnotherOne = &anotherOne;
    anotherAnotherAnotherOne->title = "maratha";
    anotherAnotherAnotherOne->movieInfo();
    anotherOne.movieInfo();

    // example 2
    Car creta = Car("Maruti", "2018", 2019);
    creta.startEngine();
    creta.displayInfo();

    // here this is wrong as constructor is private means only in class the obj
    // can be initlized;
    // Food pizza;
    // pizza.infoFood();

    // Using static method to get an instance
    // :: It is used to define and access members that belong to a particular namespace, 
    // class, or global scope.
    // Initialize static variable using ::
    Food pizza = Food::createFood();
    pizza.infoFood();
    pizza.set(10);

    Food anotherPizza = Food::createFood();
    anotherPizza.set(20);
    cout<<pizza.value<<" "<<anotherPizza.value<<endl;
    
    return 0;
}


// important points
// 1. A class can have multiple constructors through overloading, 
//    but they must differ in parameter lists.
// 2. A constructor can call another constructor in same class using this()
// 3. A constructor of child class can call parent class constructor using 
//    super()
// 4. Always used constructor so that the objects are in consistent and valid state
// 5. utilize the copy constructr, there is deep copying there
// 6. use pointer for referencing the classes object (reference copy or shallow copy)
// 7. levrage private constructor for singleton patterns ....