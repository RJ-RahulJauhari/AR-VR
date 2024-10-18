#include <iostream>
using namespace std;

class CommonMethods {
    public:
        void Drinking(string name, string drink) {
            cout << name << " is drinking " << drink << endl;
        }
        void Eating(string name, string food) {
            cout << name << " is eating " << food << endl;
        }   
        void Running(string name, double speed) {
            cout << name << " is running at " << speed << " m/s" << endl;
        }   
        void Sleeping(string name) {
            cout << name << " is sleeping " << endl;
        }
};

class Animal {
    public:
        int age;
        bool isAlive = true;
        string name;
        string species;
        double height;
        double weight;

    private:
        bool allOrganOK = true;
        const string LIVES_ON = "EARTH";

    public:
        // Constructor
        Animal(string name, string species, int age, double height, double weight) {
            this->name = name;
            this->age = age;
            this->species = species;
            this->height = height;
            this->weight = weight;
            cout << "The animal has the following properties:" << endl;
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
            cout << "Species: " << this->species << endl;
            cout << "Height: " << this->height << " meters" << endl;
            cout << "Weight: " << this->weight << " kg" << endl;
        }

        // Setter and getter methods
        void setName(string name) {
            this->name = name;
        } 

        string getName() {
            return this->name; 
        }

        void setAge(int age) {
            this->age = age;
        } 

        int getAge() {
            return this->age; 
        }

        void setSpecies(string species) {
            this->species = species;
        } 

        string getSpecies() {
            return this->species; 
        }

        void setWeight(double weight) {
            this->weight = weight;
        } 

        double getWeight() {
            return this->weight; 
        }

        void setHeight(double height) {
            this->height = height;
        } 

        double getHeight() {
            return this->height; 
        }
};

// Inherit from Animal and CommonMethods
class Human: public Animal, public CommonMethods {
    public:
        // Constructor that passes parameters to the Animal class
        Human(string name, string species, int age, double height, double weight) 
            : Animal(name, species, age, height, weight) {}
};

int main() {
    // Create a Human object
    Human* human = new Human("Rahul Jauhari", "Homo sapiens", 21, 1.75, 67.0);

    cout << "Address of Human: " << human << endl;

    // Call common methods on the human
    human->Drinking(human->getName(), "water");
    human->Eating(human->getName(), "pizza");
    human->Running(human->getName(), 9.5);
    human->Sleeping(human->getName());

    delete human;

    return 0;
}
