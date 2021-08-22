#include <iostream>

void cpp_assignment_operators(){

    // We can make a veriable x that is assigned to the value 10
    int x = 10;
    std::cout << x << std::endl;
    // Then later in the code we can update that veriable and make the veriable something else
    x += 5;
    std::cout << x << std::endl;

// Here are just some more assignment operators for cpp
    // x = 5	x = 5	
    // x += 3	x = x + 3	
    // x -= 3	x = x - 3	
    // x *= 3	x = x * 3	
    // x /= 3	x = x / 3	
    // x %= 3	x = x % 3	
    // x &= 3	x = x & 3	
    // x |= 3	x = x | 3	
    // x ^= 3	x = x ^ 3	
    // x >>= 3	x = x >> 3	
    // x <<= 3	x = x << 3


}

// Main funciton where we call our other functions like cpp_assignment_operators()
int main(){

    cpp_assignment_operators();


}