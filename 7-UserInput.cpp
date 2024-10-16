#include <iostream>
using namespace std;

int main(){

    string inp;
    string full;
    cout << "What's your name?\n";
    cin >> inp;
    getline(cin,full);

    cout << "Hello " << inp <<"\n";
    cout << "Full: Hello " << full << "\n";
    return 0;
}