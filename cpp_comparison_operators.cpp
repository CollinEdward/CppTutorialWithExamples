#include <iostream>

// This is a function 
void cpp_comparison_operators(){
    // Making two veriables x and y
    int x = 10;
    int y = 3;

    int z = (x > y);

    // Here we are saying
    // x is bigger then y
    std::cout << (x > y) << std::endl;
    // Then the program says 'is that true'
    // If that is true, then print 1 (Meaning it's true) else print 0 (Meaning it's false)

    // it's basically doing this in the background
    if (x > y){
        std::cout << "true" << std::endl;

    } else {
        std::cout << "false" << std::endl;
    }

// I-------------------------------------------------------------------------------------------I

    // In cpp we can also use ==, !=, >=, <=

    std::cout << (x == y) << std::endl;
    std::cout << (x != y) << std::endl;
    std::cout << (x >= y) << std::endl;
    std::cout << (x <= y) << std::endl;

    // Remember 1 is true, that it is that
    // And 0 is false, that it's not that
}

// This is our main function where we execute the sub-functions

int main(){
    cpp_comparison_operators();

}