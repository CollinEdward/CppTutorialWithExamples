#include <iostream>

using namespace std;

int main(){
   // giving day veriable value 4  
    int break_day = 4;

    // in the switch function we give every case a veriable fx here 1 to 7, we also give it something to do, fx printing weekdays, and then break if it gets to the veriable that we set the day to be
    switch (break_day)// Here telling it what we want to switch
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    // case '4' the value that day is set to 
    case 4:
        // print Thursday (day 4 of the week)
        cout << "Thursday";
        break;
        // Then break because we found the value 4 and executed the code, when it finds the 4 it's going to break,
        // Because that's the value we set our day to be.
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    
    }
    cout << "\n";

}