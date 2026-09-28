#include <iostream>
using namespace std;

// Function prototype
// This tells the compiler about the add function
int add(int, int);

int main() {

    // Declare two integer variables
    int a = 10, b = 20;

    // Call add() and display the returned result
    cout << "Sum = " << add(a, b) << endl;

    // End the program
    return 0;
}

// Function definition
// x and y receive the values of a and b
int add(int x, int y) {

    // Add x and y and return the result
    return x + y;
}
