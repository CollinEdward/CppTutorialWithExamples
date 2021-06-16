#include <iostream>

void cpp_accessing_string(){
    // making string which contains "Hello World!"
    std::string myString = "Hello world!";

    // By using [] we can access the string 
    std::cout << myString[0] << std::endl;
        // In programming position 1 of called 0 in a string  
        // So to print out l in "Hello World!", we would do:
    std::cout << myString[2] << std::endl; // But that's only the first l, if we also want to print the second l after the first l in hello we can do:
    std::cout << myString[2,3] << std::endl;

    // If we want to replace something in a string, we can do:
    myString[0] = 'E';
    std::cout << myString << std::endl;

}


int main(){

    cpp_accessing_string();

}