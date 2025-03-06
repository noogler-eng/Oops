// overriding

#include<iostream>
using namespace std;

class Movie {
    public:
    string name;
    // this will only call when there was no argument
    // while creating object
    Movie() { 
        cout<<"Movie constructor"<<endl; 
    }

    // this will only when we send argument type string sinle
    Movie(string _name){
        this->name = _name;
    }

    void info(){
        cout<<"name: "<<this->name<<endl;
    }

};

class SubMovie : public Movie {
    public:
    SubMovie(){
        cout<<"this is submovie constructor"<<endl;
    }
};

int main() {
    Movie one = Movie();
    Movie two = Movie("chavva");
    one.info();
    two.info();

    // it will call both the constructor parent and subparent
    // parent constructo will call first the subparent one
    SubMovie sub = SubMovie();
}
