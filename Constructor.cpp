#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:

    // Creating a Constructor
    // Constructor it is a special function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.

    Complex(void); // CONSTRUCTOR DECLARATION 

    void printNumber()
    {
        cout<< "Your number is " << a << " + " << b << "i" <<endl;
    }
};

Complex :: Complex(void)  // This is a default constructor as it takes no Parameters.
{
    a = 64;
    b = 10;
}
int main() {
    Complex c;
    c.printNumber();
 
    return 0;
}