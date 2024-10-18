#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate a vector
    vector<int> *v = new vector<int>;

    // 1. Adding elements (push_back)
    v->push_back(10);
    v->push_back(20);
    v->push_back(30);
    
    // 2. Accessing elements (using [])
    cout << "Accessing Elements (using []): " << (*v)[0] << ", " << (*v)[1] << ", " << (*v)[2] << endl;

    // 3. Accessing elements (using .at() method)
    cout << "Accessing Elements (using at()): " << v->at(0) << ", " << v->at(1) << ", " << v->at(2) << endl;

    // 4. Check if vector is empty
    cout << "Is the vector empty? " << (v->empty() ? "Yes" : "No") << endl;

    // 5. Size and capacity of the vector
    cout << "Size of the vector: " << v->size() << endl;
    cout << "Capacity of the vector: " << v->capacity() << endl;

    // 6. Modify an element
    (*v)[1] = 25;
    cout << "After modification, second element: " << (*v)[1] << endl;

    // 7. Insert an element at a specific position
    v->insert(v->begin() + 1, 15);  // Insert 15 at index 1
    cout << "After insertion at index 1: ";
    for (int i = 0; i < v->size(); i++) {
        cout << (*v)[i] << " ";
    }
    cout << endl;

    // 8. Remove an element from a specific position
    v->erase(v->begin() + 2);  // Remove element at index 2
    cout << "After removing element at index 2: ";
    for (int i = 0; i < v->size(); i++) {
        cout << (*v)[i] << " ";
    }
    cout << endl;

    // 9. Pop back (remove last element)
    v->pop_back();
    cout << "After pop_back: ";
    for (int i = 0; i < v->size(); i++) {
        cout << (*v)[i] << " ";
    }
    cout << endl;

    // 10. Clear the vector
    v->clear();
    cout << "After clear, is the vector empty? " << (v->empty() ? "Yes" : "No") << endl;

    // 11. Releasing dynamically allocated memory
    delete v;

    return 0;
}
