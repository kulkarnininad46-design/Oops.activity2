#include <iostream>
using namespace std;

// Create a class named Student
class Student {

public:

    // Data member to store name
    string name;

    // Data member to store age
    int age;

    // Member function to display student details
    void show() {

        // Display name and age
        cout << name << " " << age << endl;
    }
};

int main() {

    // Create an object s1 of Student class
    Student s1;

    // Assign a name to the object
    s1.name = "Amit";

    // Assign age to the object
    s1.age = 20;

    // Call the show() function
    s1.show();

    // End the program
    return 0;
}
