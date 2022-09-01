#include <iostream>
using namespace std;
class c1
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
    // default contructor
    c1(void);
    void print()
    {
        cout << "the sum of " << a << " and " << b << " is " << a << " + " << b << "i";
    }
};
c1::c1(void)
{
    a = 5;
    b = 6;
}
int main()
{
    c1 ravi;
    ravi.print();
    return 0;
}
// A constructor should be declared in the public section of the class
// They are automatically invoked whenever the object is created
// They cannot return values and do not have return types
// It can have default arguments
// We cannot refer to their address
