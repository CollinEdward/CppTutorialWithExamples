#include <iostream>


void cpp_string_length(){
    
    // Making a string with some text in
    std::string string1 = "This is my string";
    // printing out 'The length of the string is' and then the string length 
    std::cout << "The length of the string is: " << string1.length() << std::endl;
                                            // Calling the function length() in cpp to get the lengh of the string
                                                    // We are putting string1 infront of .lenght() to specify which veriable we want to get the lenght of.
    
    std::cout << "The size of the string is: " << string1.size() << std::endl;
    // In cpp there is a function called size() this function is the same thing as length() it's just two differnt names
    // It's up to you, to choose which one you want to use.
}

int main(){

    cpp_string_length();

} 