#include <iostream>

using namespace std;


// Base class / main class / class is called Vehicle
class Vehicle {
    public:// veriable string ford
        string brand = "Ford";
        // function inside class
        void honk() {
            // execute something in the class function/ methode
            cout << "Tuut, tuut! \n" ;
        }
};

// Derived class / second class
class Car: public Vehicle {
    public: // make public string (veriable) mustang
        string model = "Mustang";
};

// main function
int main() {
    // make car an abject
    Car myCar;
    // return myCa.honk() from Car class
    myCar.honk();
    // print car brand, and car model
    cout << myCar.brand + " " + myCar.model;
    cout << "\n";
}