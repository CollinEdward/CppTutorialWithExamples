#include <iostream>

// This is basically using the same main class of animal sound, but then updating sub-classes to make differnt animals

using namespace std;


// Base class
class Animal {
  public:// function animalSound
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class // second class
// here we are creating a new class called pig, and then using the public class Animal
class Pig : public Animal {
  public:// animalSound function that prints something out
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
  }
};

// Derived class
// Here we are then making a new class and then again using the Animal Class from the start
class Dog : public Animal {
  public:// animalSound function that then says something new
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main(){

    // Making all the classes to objects
    Animal myAnimalObject;
    Pig myPigObject;
    Dog myDogObject;

    // calling animal sound from all the class objects
    myAnimalObject.animalSound();
    myPigObject.animalSound();
    myDogObject.animalSound();


    // nextline space
    cout << "\n";


}