#include <iostream>
using namespace std;
#include <vector>

typedef vector<pair<string,int>> PairList;

// "typedef" was later replaced by "using" keyword

using PairList = vector<pair<string,int>>;

int main(){

 // Initialize the vector with some pairs
    PairList pairList = { {"apple", 10}, {"banana", 20}, {"orange", 15} };

    // Print the vector elements
    for(const auto& pair : pairList) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;

    return 0;
}