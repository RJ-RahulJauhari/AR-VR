/**
 * The code snippet demonstrates the declaration and printing of various data types including integers,
 * doubles, characters, booleans, and strings in C++.
 * 
 * @return The program is returning 0, which is the exit code indicating successful execution of the
 * program.
 */

#include <iostream>
using namespace std;




int main(){

    // Integer Datatype
    int age = 21;
    int year = 2024;
    int days = 7.5;
    cout << age << "\n";
    cout << year << "\n";
    cout << days << "\n";

    // Double Datatype
    double price = 17.4;
    cout << price << "\n";
    
    // Character Datatype
    char c = 'A';
    cout << "This student has a " << c << " grade!\n";

    // Boolean Datatype
    bool flag = false;
    cout << "Flag Value: " << flag << "\n";

    // String Datatype
    string name = "Rahul Jauhari";
    cout << "Name: " << name << "\n";

    return 0;
}