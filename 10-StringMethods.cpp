#include <iostream>
#include <string>
using namespace std;

int main() {
    // String Initialization
    string str1 = "Hello";
    string str2 = "World";
    string str3;

    // String Concatenation
    str3 = str1 + " " + str2;  // Combine two strings with a space in between
    cout << "Concatenated string: " << str3 << endl;

    // String Length
    cout << "Length of str3: " << str3.length() << endl;

    // Accessing individual characters
    cout << "First character of str1: " << str1[0] << endl;
    cout << "Last character of str2: " << str2[str2.length() - 1] << endl;

    // String Comparison
    if (str1 == str2) {
        cout << "str1 and str2 are equal." << endl;
    } else {
        cout << "str1 and str2 are not equal." << endl;
    }

    // Substring Extraction
    string subStr = str3.substr(6, 5);  // Extract "World" from "Hello World"
    cout << "Substring extracted from str3: " << subStr << endl;

    // String Find (Searching)
    size_t found = str3.find("World");
    if (found != string::npos) {
        cout << "'World' found in str3 at position: " << found << endl;
    } else {
        cout << "'World' not found in str3." << endl;
    }

    // String Insertion
    str3.insert(5, ",");
    cout << "String after insertion: " << str3 << endl;

    // String Erase
    str3.erase(5, 1);  // Erase the inserted comma
    cout << "String after erasing the comma: " << str3 << endl;

    // String Replace
    str3.replace(6, 5, "Universe");  // Replace "World" with "Universe"
    cout << "String after replacement: " << str3 << endl;

    return 0;
}
