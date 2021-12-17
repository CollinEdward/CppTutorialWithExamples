#include <iostream>

//namespace is std::
using namespace std;

// first sub-function
void cpp_break_and_break(){
    // verialbe i value 0, if i is smaller then 10 execute the code under
                        // i++ means add 1 to i everytime it calls the function
    for (int i = 0; i < 10; i++){
    //  if i is equal to 4 
        if (i == 4) {
            // break; means stop the code
            break;
        }
        // print i and do 'nextline'
        cout << i << "\n";

    }
}

// second sub-fcuntion
void cpp_break_and_continue(){
    // verialbe i value 0, if i is smaller then 10 execute the code under
                    // i++ means add 1 to i everytime it calls the function
    for (int i = 0; i < 10; i++){
    //  If i equal 4 then execute the following code
        if (i == 4) {
            // continue; just means, 'still continue even if i is 4 until the (< number on this side of the if statement)'
            continue;
        }
        // print i and do 'nextline'
        cout << i << "\n";

    }

}

int main(){
    // Calling the two functions to show in terminal
    
    cpp_break_and_break();
    cout << "\n";
    cpp_break_and_continue();

}