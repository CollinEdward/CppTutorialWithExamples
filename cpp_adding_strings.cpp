#include <iostream>

using namespace std;

void adding_two_numbers(){
    int x = 10;
    int y = 20;

    cout << x + y;


}


void adding_two_numbers_userinput(){
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;

}

int main(){
    adding_two_numbers();    
    cout << "\n";
    adding_two_numbers_userinput();

    cout << "\n";
}