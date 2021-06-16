#include <iostream>
using namespace std;



void never_ending_while_loop(){

    // Inside the () is where you would put your condition fx 
    // while (1), it's the same as saying while (true) this means it's going to be an endless loop because it's always going to be true
   
    while (1){
        cout << "1";
    }
    // If you want to see what it looks like with this loop, you can try to call the function in the main function at the buttom

}
// This is what an while loop would look like with a condition
void while_loop_condition(){
    // Veriable x with value 0
    int x = 0;
    // while x is smaller then 11 then execute the code
    while (x < 11){
        cout << "x is smaller then '11' " << x +1 << " time(s)" << "\n";
    
    // x++; means everytime the function is called, +1 to x
    x++;

    }
    
    cout << "\n";
    
}

int main(){
    
        //Just uncomment the function under and you will ahve a never ending loop
    //never_ending_while_loop();

    while_loop_condition();


}