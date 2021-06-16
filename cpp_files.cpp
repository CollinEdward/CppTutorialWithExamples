//The fstream library allows us to work with files.
//To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

#include <iostream>
#include <fstream>

//ofstream	Creates and writes to files
//ifstream	Reads from files
//fstream	A combination of ofstream and ifstream: creates, reads, and writes to files

using namespace std;

void write_to_file(){
    // Creting the file
    ofstream cpp_myFile("myFile.txt");

    // writing something in the file as if we would print out something into the file
    cpp_myFile << "Here in this file you can write whatever you want";

    // Then close the file to save
    cpp_myFile.close();

}

void read_from_file(){
    string myText;

    ifstream cpp_readFile("myFile.txt");

while (getline (cpp_readFile, myText)) {
    cout << myText;
}

cpp_readFile.close();

}



int main(){
    
    // This makes the file, and then writes something in it
    write_to_file();

    // This reads the file, and then prints what is in the file.
    read_from_file();



}
