#include <iostream>

// You don't need to use std:: 
// you can just write using namespace std;

void cpp_user_input_string(){
    std::string firstName;
    std::cout << "Type your first name: " << std::endl;
    std::cin >> firstName; // get user input from the keyboard
    std::cout << "Your name is: " << firstName << std::endl;

    std::string secondName;
    std::cout << "Type your second name: " << std::endl;
    std::cin >> secondName; // get user input from the keyboard
    std::cout << "Your name is: " << secondName << std::endl;

    std::cout << "Your first and second name is: " << firstName + " " +  secondName << std::endl;

}

int main(){
    cpp_user_input_string();


}