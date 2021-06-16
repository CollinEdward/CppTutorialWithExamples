#include <iostream>

using namespace std;

// creating normal class
class cpp_constructorclass {
    public:
        // calling the class inside the class so it automatically runs when we make a object out of the class in the main function
        cpp_constructorclass() {
            cout << "Hello World!";
            cout << "\n";


        }


};


int main(){
    // calling the class and making a object out of it
    cpp_constructorclass cpp_constructorclassObject;


}