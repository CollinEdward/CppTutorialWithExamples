#include <iostream>

using namespace std;

// function cpp_references
void cpp_references(){
    
    // Making two veriables, there is one normal string verialbe
        // But there is also a strin & verialbe, the & means that we can add another verialbe to that other veriable, so we can refer to it with both veriables
    string IndianTechSupport = "IndianTechSupport";
    string &ITS = IndianTechSupport;

    // Using the first veriable
    cout << IndianTechSupport;
    
    // Ignore this, this is just next line space
    cout << "\n";

    // Using another veriable, but still calling the same string
    cout << ITS;



}


int main(){
    // Calling out function cpp_references()
    cpp_references();
    // Next line space
    cout << "\n";

}