#include <iostream>

using namespace std;


void cpp_booleans(){

    // Booleans can have two values which are true and false
    bool isCodingFun = true;
    bool isCppHard = false;

    // We can print it out and then see what it returns
    cout << isCodingFun;
    
    cout << "\n";

    // Try it out yourself and run it 
    cout << isCppHard;

    cout << "\n";

}

void cpp_booleans2(){
    
    // Two veriables for intigers
    int x = 10;
    int y = 20;
    
    // x is bigger then y
    cout << (x > y);
    // When we do this, it tells it to check if that is true or false (basically checking the boolean)

    cout << "\n";

}


int main(){

    // calling the function to run it
    cpp_booleans();
    cpp_booleans2();


}