#include <iostream>
using namespace std;

int main() {
    // Declare two numbers
    int num1 = 15;
    int num2 = 4;

    // Arithmetic operations
    int sum = num1 + num2;         // Addition
    int diff = num1 - num2;        // Subtraction
    int prod = num1 * num2;        // Multiplication
    int quotient = num1 / num2;    // Division (integer division)
    int remainder = num1 % num2;   // Modulus (remainder)

    // Display results
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
