#include <iostream>


// We are telling it to use namespace std just to save some time while writing all the string
// Because when we are making string we always need to put std:: infront if the string function
using namespace std;
// This will also save us time while using cout because we don't have to write std::cout << << std::endl; every time
// We can just write cout << "Something here"; and it will do the same

// sub-function
void cpp_string_concatenation(){
    // Making our two strings 
    string firstString = "First string, ";
    string secondString = "Second string.";
                // As you can see, you can add two strings together
    string stringCombine = firstString + secondString;

                    // \n is just to tell it to move to next line (This just makes it look nice in the terminal when running it) 
    cout << stringCombine + "\n";

}

void cpp_string_concatenation2(){
    // This is a second example of how you can add two strings together using append

    string firstString = "First string, ";
    string secondString = "Second string.";

    //                      Here using append. append just means 'add to'
    string stringCombine = firstString.append(secondString);
    cout << stringCombine + "\n";

    // Run it and see what it returns for both of the functions
}


// Main function where we call our functions
int main(){

    cpp_string_concatenation();
    cpp_string_concatenation2();
}