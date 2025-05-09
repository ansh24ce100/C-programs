#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called" << endl;
    }

    virtual ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
    int* data;

public:
    Derived() {
        data = new int[5];
        cout << "Derived constructor called (memory allocated)" << endl;
    }

    ~Derived() {
        delete[] data;
        cout << "Derived destructor called (memory deallocated)" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100";

    return 0;
}

