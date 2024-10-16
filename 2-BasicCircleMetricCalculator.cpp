#include <iostream>
using namespace std;

int main(){

    const double PI = 3.141537;
    double radius = 5;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    cout << "Circumference: " << circumference << "\n";
    cout << "Area: " << area << "\n";
    return 0;
}