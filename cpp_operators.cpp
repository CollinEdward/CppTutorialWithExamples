#include <iostream>

void cpp_operators(){
    // as always making a 'next line' space veriable
    std::string newline = "\n";
    
    // We can plus intigers in a veriable 
    int x = 100 + 50;

    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;
    // in the veriables sum1, sum2, sum3 we can also use the operators -,*,/,%,++,--
                                                                // ++ increases the value of a variable by 1
                                                                // -- Decreases the value of a variable by 1

    std::cout << x << std::endl;
    
    std::cout << "--------------------------------------------------------------" << std::endl;
    std::cout << sum1 << newline << sum2 << newline << sum3 << std::endl;

}

// Making the main function of the program where we are gonna call the function
int main(){
    cpp_operators();



}