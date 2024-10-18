#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function to add two double values
double add(double a, double b) {
    return a + b;
}

int main() {
    // Calling the function with two integers
    int result1 = add(10, 20);
    cout << "Addition of two integers (10 + 20): " << result1 << endl;

    // Calling the overloaded function with three integers
    int result2 = add(10, 20, 30);
    cout << "Addition of three integers (10 + 20 + 30): " << result2 << endl;

    // Calling the overloaded function with two doubles
    double result3 = add(5.5, 2.3);
    cout << "Addition of two doubles (5.5 + 2.3): " << result3 << endl;

    return 0;
}
