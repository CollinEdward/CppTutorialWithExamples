#include <iostream>

using namespace std;

// Making the class
class cpp_myClass {
    public:
        // Creating a intiger and a string veriable inside the class
        int myNum;
        string myString;

};


class cpp_person {
    public:
        string name;
        int age;
        int height;

};

int main(){

    // Making the class a object
    cpp_myClass myObject;

    // Now we can call the veriables and give them values and strings to print out
    myObject.myNum = 213;
    myObject.myString = "String from class";

    // And then print out the objects
    cout << myObject.myNum << "\n"; // "\n" for a nextline space
    cout << myObject.myString;
    cout << "\n"; // and "\n" to make it look nice in the terminal


    // Second class
    // Making class an object
    cpp_person person_Object;
    // Giving the veriable a value of int or string
    person_Object.name = "YourName";
    person_Object.age = 17;
    person_Object.height = 195;

    // printing out the objects
    cout << person_Object.name;
    cout << "\n";
    cout << person_Object.age;
    cout << "\n";
    cout << person_Object.height;
    cout << "\n";
}