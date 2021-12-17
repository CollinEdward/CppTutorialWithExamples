#include <iostream>

// Making a function for the datatypes
void cpp_datatypes(){

    // Making all the veriables for the datatypes
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number (double and float seems to be the same)
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    
    // we are specifying that we are using std as namestapce for the string
    std::string myString = "This is a string"; // This first string is the string that will print "This is a string"
    std::string mySecString = "\n"; // And this second string will tell it to go to the next line before printing the next thing 'next line' 
    
    // Here we are finally printing out the veriables
    std::cout << myNum << mySecString << myFloatNum << mySecString <<myDoubleNum << mySecString <<myLetter << mySecString <<myString << std::endl;
}
    
// Creating the main function so we can execute the function
int main(){
    // Calling our function that we made for the datatypes
    cpp_datatypes();
}

