#include <iostream>

using namespace std;


// You would never make a function with this long of a name, this is just so you know what the function is about
void if_else_elseif_bigger_smaller_equal_Condition(){

    int x = 1;
    int y = 10;

    // If x is bigger then y, then do the following
    if (x > y){
        cout << "x is bigger then y";
    // Else if x is smaller then y then do the following 
    } else if (x < y ) {
        cout << "x is smaller then y";
    // Else just fall back to this if it's none of thoes 
    } else {
        cout << "returned 0";

    }

    // newline space
    cout << "\n";

    int z = 23;
    int k = 32;
    // if z is exatly the same as k then return the following
    if (z == k){
        cout << z << " is the same as " << k; 
    // else if z is not the same as k then return the following
    } else if (z != k){
        cout << z << " is not the same as " << k;
    // else just return 0 to the teminal (Here you can also put nothing/ just don't do the last else function)
    } else {
        cout << "returned 0";
    }
    // newline space
    cout << "\n";

    int a1 = 1;
    int a2 = 10;
    // if a1 is bigger or equal to a2 execute the following code
    if (a1 >= a2){
        cout << a1 << " is bigger or equal to " << a2;
    // else if a1 is smaller or equal to a2 execute the following code
    } else if (a1 <= a2){
        cout << a1 << " is smaller or equal to " << a2;
    }
    // newline space 
    cout << "\n";

    // We can also do oneline if statements
    int a3 = 20;
    //              if a3 is smaller then 18 then 1., else 2.
    string result = (a3 < 18) ? "1." : "2.";
    cout << result;

    // newline space 
    cout << "\n";
}

int main(){
    if_else_elseif_bigger_smaller_equal_Condition();

}