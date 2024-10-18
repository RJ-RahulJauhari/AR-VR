#include <iostream>
using namespace std;

int main() {
    // Implicit type conversion
    int intVar = 42;
    double doubleVar = intVar;  // Implicit conversion from int to double

    cout << "Implicit type conversion:" << endl;
    cout << "Integer value: " << intVar << endl;
    cout << "Converted to double: " << doubleVar << endl;

    // Explicit type conversion (Type Casting)
    double pi = 3.14159;
    int intPi = (int) pi;  // Explicit conversion from double to int (C-style)
    // You can also use static_cast<int>(pi); for C++ style casting

    cout << "\nExplicit type conversion:" << endl;
    cout << "Double value (pi): " << pi << endl;
    cout << "Converted to integer: " << intPi << endl;

    // Explicit conversion from double to int using static_cast
    int intPi2 = static_cast<int>(pi);
    cout << "Converted to integer using static_cast: " << intPi2 << endl;

    return 0;
}
