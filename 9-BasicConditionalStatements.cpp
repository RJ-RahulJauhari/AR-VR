#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    // If-else statement demonstration
    if (number > 0) {
        cout << number << " is positive." << endl;
    } else if (number < 0) {
        cout << number << " is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    // Switch statement demonstration
    cout << "Enter a number from 1 to 3: ";
    cin >> number;

    switch (number) {
        case 1:
            cout << "You entered one." << endl;
            break;
        case 2:
            cout << "You entered two." << endl;
            break;
        case 3:
            cout << "You entered three." << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 3." << endl;
            break;
    }

    // Ternary operator demonstration
    int a, b;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    // Find the maximum of a and b using ternary operator
    int max = (a > b) ? a : b;
    cout << "The maximum of " << a << " and " << b << " is " << max << endl;

    return 0;
}
