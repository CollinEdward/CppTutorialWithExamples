#include <iostream>

using namespace std;

// This is what I like to call a sub-function. Evertime you make a cpp file you have to make a main function where you can put anything in you want
// printing things, call functions, etc etc...
void function(){

    // In the function is just like defining something.
    
    // veriable x with value 10
    int x = 10;
    // Then print out the veriable x
    cout << x; 
    cout << "\n";

}
// We can make as many functions that we like 

void while_loop_5(){
    // veriable x value 0
    int x = 0;
    // while x is smaller then 10
    while (x < 10 ){
        // add 1 evertime the function is called 
        x++;
        cout << x;
        // print x


        cout << "\n";

    }

}

void call_me(){
    cout << "You can call me as many times as you want";

}

// This is the main function, this is where we call the other function we make, here we can also print things, make lists, arrays, and whatver we can do in the sub-functions
int main(){
    
    // Here we are calling the function that we made on the top
    function();
    // A function doesn't need to be named function, the function can be named whatever you want.
    // A funciton can be named what the function does
    // fx: while_loop(){}, then we know it's a while loop that is in the function
    cout << "\n";
    while_loop_5();
    
    // We can call a function as many times as we want
    cout << "\n";
    call_me();
    cout << "\n";
    call_me();
    cout << "\n";
    call_me();
    cout << "\n";
    call_me();
    cout << "\n";

}