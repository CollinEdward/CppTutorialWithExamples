#include <iostream>

using namespace std;

class cpp_class_access_specifiers {
    public: // public access specifier (means it can be used when you make an object out of the class)
        int x;
    private: // This is the reverse of public (This is 'not allowed', because it's private, so it can't be used)
        int y;
    protected: // This can only be accessed inside the class.
        int z;

};

int main(){

    cpp_class_access_specifiers cpp_class_access_specifiersObject;

    cpp_class_access_specifiersObject.x = 20;
    
        // If you uncomment this you will see that you get an error that y is private
    //cpp_class_access_specifiersObject.y = 22;

    cout << cpp_class_access_specifiersObject.x;
    // Here printing out the cpp_class_access_specifiersObject.x we can see we get the output of 20 that we gave it as value


    cout << "\n";

}