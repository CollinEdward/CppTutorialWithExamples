#include <iostream>
using namespace std;

// Class car
class Car {
  public:
    // veriable speed, with parament maxSpeed that is type intiger
    int speed(int maxSpeed);
};
// Method/function definition outside the class (We could also make a methode/function inside the class, then call it from that class)
int Car::speed(int maxSpeed) {
    return maxSpeed;
    // return the maxSpeed (else it's going to print -1467405953) 
}

int main() {
    Car carObj; // Create an object of Car
    cout << carObj.speed(200); // Call the function/methode with an argument
    cout << "\n";  // nextline space  
    
}