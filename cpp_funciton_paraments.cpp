#include <iostream>

using namespace std;

// This is the parament string fname, this has position 0, for the paraments
void cpp_parament(string fname) {
    // print the fname(first name) with the last name as refsnes
    cout << fname << " Refsnes\n";
}

// This is the parament string fname, this has position 0, for the paraments
void cpp_two_paraments(string fname, string mName) {
    // In this function we made a second parament mName, which is then gonna be the middle name
    
    // print the fname(first name) and mName (middle name) with the last name as refsnes
    cout << fname << " " << mName << " Refsnes\n";
}

// We can also make a function with a default parament so when we call the function it's going to print out that
                                // Default parament Norway
void cpp_default_parament(string country = "Norway") {
    cout << country << "\n";
}

// We are using int because using int x as the parament 
int cpp_return_keyword_paraments(int x){
    return 5 + x;

}

int cpp_return_two_keyword_paraments(int x, int y){
    return x + y;


}

int plusFuncInt(int x, int y) {
  return x + y;
}

// In this function we are just making veriables
void cpp_swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}


int main() {
// Here we are now calling the function and telling it, the string parament is = Liam
    cpp_parament("Liam");
    // here it's Jenny
    cpp_parament("Jenny");
    // And then Anja
    cpp_parament("Anja");
    cout << "\n";
    // This is smart because we can make a function called family_names, and then just update the parament
    
    // Now we are calling the second function and then using both paraments
    cpp_two_paraments("Liam", "Anderson");
    
    cpp_two_paraments("Jenny", "Anderson");
    
    cpp_two_paraments("Anja", "Anderson");
    cout << "\n";

    // We can set the parament to something else that we want
    cpp_default_parament("Sweden");
    cpp_default_parament("India");
    // But if we don't put anything as the parament, then it's going to use the default parament
    cpp_default_parament();
    cpp_default_parament("USA");
    cout << "\n";

    // Here the parament is the veriable x, when we then call the function we are giving x the value of 3, that's why it returns 8 (5 + 3 = 8)
    cout << cpp_return_keyword_paraments(3);
    
    cout << "\n";
    
    // In the function we return x + y. when we then call the function we can now put 5, 3 (Where 5 is x and 3 is y) and then plus them together with just the function and paraments
    cout << cpp_return_two_keyword_paraments(5,3);

    cout << "\n";

    //This last part is for the last function.

    // Making two veriables firstNum and secondNum
    int firstNum = 10;
    int secondNum = 20;
    
    cout << "\n";
    // Before calling the function
    cout << "Before swap: " << "\n";

    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    cpp_swapNums(firstNum, secondNum);

    // printing the changed/ swapped veriables because the function was called
    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    cout << "\n";

}