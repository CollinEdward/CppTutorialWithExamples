#include <iostream>

using namespace std;

void cpp_memory(){
    
    // Making string ITS 
    string ITS = "IndianTechSupport";
    
    // using the & symbole prints out the memory where it's store
    cout << &ITS;
    
    cout << "\n";
    
    
    // Just calling the veriable and printing it out, will output what is stored in the veriable
    cout << ITS;
}

void cpp_creating_pointers(){
    
    
    string food = "Pizza"; // A food variable 

    cout << food;  // Outputs the value of food 
    cout << "\n";
    cout << &food; // Outputs the memory address of food 

    cout << "\n";

    string* ptr = &food; // A pointer variable, with the name ptr, that stores the address of food


    cout << &food << "\n"; // Output the memory address of food (0x6dfed4)


    cout << ptr; // Output the memory address of food with the pointer (0x6dfed4)

}

int main(){
    // Calling function cpp_memory()
    cpp_memory();
    cout << "\n";

    cpp_creating_pointers();
    cout << "\n";

}