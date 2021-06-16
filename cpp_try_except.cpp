#include <iostream>

using namespace std;

// Function try_except
void try_except_throw_catch(){
    // try, veriable age with value 20
    // if age is higher then 21, execute code
    try {
        int age = 20;
        if (age >= 21){
            // You can drink
            cout << "You can drink";
        // else throw (age)
        } else {

            // here we throw the age, and then we let the catch (int age) handle it
            throw (age);

        }

    }
catch (int age) {
    cout << "Access denied, you must be 21 years old \n";
    cout << "Age is: " << age;
    }

}

int main(){

    try_except_throw_catch();
    cout << "\n";

}