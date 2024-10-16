#include <iostream>
#include <cmath>  // Required for math functions
using namespace std;

int main() {
    double num = 9.0;
    double angle = 45.0; // in degrees

    // Square root
    cout << "Square root of " << num << " is " << sqrt(num) << endl;

    // Power
    double base = 2.0, exponent = 3.0;
    cout << base << " raised to the power " << exponent << " is " << pow(base, exponent) << endl;

    // Trigonometric functions (converting degrees to radians)
    double radians = angle * M_PI / 180.0;
    cout << "Sine of " << angle << " degrees is " << sin(radians) << endl;
    cout << "Cosine of " << angle << " degrees is " << cos(radians) << endl;

    // Logarithmic functions
    double value = 10.0;
    cout << "Natural log of " << value << " is " << log(value) << endl;    // ln(x)
    cout << "Log base 10 of " << value << " is " << log10(value) << endl; // log10(x)

    // Absolute value
    double negativeNumber = -23.5;
    cout << "Absolute value of " << negativeNumber << " is " << fabs(negativeNumber) << endl;

    // Ceil value
    double ceilNumber = 23.5;
    cout << "Round up value of " << ceilNumber << " is " << ceilf(ceilNumber) << endl;

    // Round value
    cout << "Rounded value of " << ceilNumber << " is " << roundf(ceilNumber) << endl;
    
    // Floor value
    cout << "Round Down value of " << ceilNumber << " is " << floorf(ceilNumber) << endl;

    return 0;
}
