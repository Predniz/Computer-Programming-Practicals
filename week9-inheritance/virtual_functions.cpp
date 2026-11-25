// ============================================================
// ACTIVITY 2: VIRTUAL FUNCTIONS
// Learning Outcome: Analyse dynamic binding
// ============================================================
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // THE FIX: Add 'virtual' here
    virtual void speak() {
        cout << "Animal makes a generic sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // This overrides the base class method
    void speak() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    cout << "--- With Virtual Keyword ---" << endl;

    // We create a POINTER of type Animal (Base)
    Animal* myPet;

    // We point it to a Dog object (Derived)
    myPet = new Dog();

    // We call speak().
    myPet->speak();

    delete myPet;
    return 0;
}