/**
 * The program defines two namespaces with integer variables and outputs the values of these variables
 * along with a local variable in the main function.
 * 
 * @return The program will output the following:
 */

#include <iostream>
using namespace std;

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}


int main(){

    int x = 0;
    
    cout << x << "\n"; // Local Variable
    cout << first::x << "\n"; // Variable of "first" Namespace
    cout << second::x << "\n"; // Variable of "second" Namespace

    return 0;
}