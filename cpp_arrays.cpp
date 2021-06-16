#include <iostream>

using namespace std;

void cpp_array(){

    // Veriable cars
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    // veriable myNum
    int myNum[3] = {10, 20, 30};
    // Print fourth car (In programming item 1 in the array is the value of 0) 
    cout << cars;
    cout << "\n";
    // Printing myNum 3
    cout << myNum;
    cout << "\n";

}

void cpp_array_loop(){

    // Veriable cars
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    
    // veriable i with value 0
        //       When i is smaller then 4 execute code under
                        // add 1 to i evertime the function is called
    for(int i = 0; i < 4; i++) {
        cout << cars[i] << "\n";
}


}

// Function cpp_array_append
void cpp_array_append(){
    // veriable cars, giving it 5 item places   
                                            //     Adding 1 item that is empty so we can add something in there 
                     //  0       1       2       3      4
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", ""};
        // Here we are writing 5 inside the [] because there are 5 items

    // veriable x      Appending tesla to the empty item
    string x = cars[4].append("Tesla\n");
    // Here we are writing 4 in the [] because arrays always start 0 
    cout << x;

}

int main(){

    // When this function gets called we can see that it returns mamory
    cpp_array();
    
    // But when we do a while loop, it retuns the names of the cars
    cpp_array_loop();

    // Appending veribale to array
    cpp_array_append();
}