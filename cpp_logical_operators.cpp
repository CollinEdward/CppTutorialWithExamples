#include <iostream>

// This is our first sub-function 
void cpp_logical_operators(){
    // Making veriable x with the value of 7
    int x = 7;

    // The line under is basically saying (if x is smaller then 5 and x is smaller then 10 then return true) 
    if (x < 5 && x < 10){
        // If it's true then it will always return the first thing in the if statement which is true here, but if it's false
        //  then it will eather return nothing, or the else statement that we gave it
    
    //  Here we are telling it what to do if it's returning true
        std::cout << "true" << std::endl; // It doesn't have to return 'true' it can return anything you want it to, fx if it's true, then you can make it call another function.
    
    // making an else statement to tell it, 'if it's false, then just return this', this can be anything else then false, it doesn't have to return false if you don't want it to
    } else {
        std::cout << "false" << std::endl;
    }
    // Try to run it and watch what it returns, then reflect over why it returns what it returns

}

// This is our second sub-function 
void cpp_logical_operators2(){
    // This line is saying (return true(true is always the first thing after the if statement, true is also = to 1) if one of the statements are true)
    int x = 2;
    // if x is smaller then 5 then return true
    //          and/else if x is smaller then 4, also return true
    if (x < 5 || x < 4){
        std::cout << "true" << std::endl;

    // If none of the statements are true then return false
    } else {
        std::cout << "false" << std::endl;

    }
    // Run it and see what it's going to return
    // And then reflect over why it returned that boolean

}

// This is our third sub-function 
void cpp_logical_operators3(){
    // veriable with the value 7
    int x = 7;
    // The line under is (If one if these are true, then return false)
    if (!(x < 5 && x < 4)){
    // Because of the ! before the (x < 5 && x < 4) then  it tells it 'if the output is true, then return false, if it's false then return true'
        std::cout << "true" << std::endl;
    // And in this case it's going to return true, not that none of the statements are true
    // It's true that it's false

    // If it returns true, then return false because of the !
    } else {
        std::cout << "false" << std::endl;

    }

}

int main(){

    cpp_logical_operators();
    cpp_logical_operators2();
    cpp_logical_operators3();
}