#include <iostream>

using namespace std;

// Making class
class cpp_myClass {
    public:
        // Making a function inside the class
        void cpp_ClassFunction(){
            // printing hello world
            cout << "Hellow World!";
            cout << "\n"; // nexline space
        }
        // second example of a function inside the class
                            // Setting parament x and y
        int cpp_classFunction2(int x, int y){
            cout << "This is the second function inside the class"; 
            cout << "\n"; // nexline space
            // Selling it to plus x and y when the function is called (in the function we use the paraments to tell it what x and y is)
            return x + y;


        }
};


int main(){
    // Making the class a object
    cpp_myClass myClassObject;
    
    // calling the function inside the class
    myClassObject.cpp_ClassFunction();
    // In the function inside the class it does expect two arguments, that's why you can just put 0,0 inside so it doens't print anything
    myClassObject.cpp_classFunction2(0,0);
    // Then later here you can print out the function and then put two arguments (that are intigers, because we set it as int x and int y)
    cout << myClassObject.cpp_classFunction2(5,2); // And then it's going to return both the string that we printed in the functino
                                                 // And the return x + y and print that






    cout << "\n";


}