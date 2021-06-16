#include <iostream>

using namespace std;


void cpp_dereference(){
    // Variable declaration
    string food = "Pizza";  
    
    // Pointer declaration
    string* ptr = &food;

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";


}

int main(){

    cpp_dereference();

}