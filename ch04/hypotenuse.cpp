#include <iostream>
#include <cmath>
using namespace std;

// A square root can be calculated as follows (returns a double type value):
// double root = sqrt (double_number);
// You will need the cmath-library.

// Input first triangle leg: 4

// Input second triangle leg: 6

// Hypotenuse length: 7.2111

int main(){
    int first;
    int second;
    cout << "Input first triangle leg:";
    cin >> first;
    cout << "Input second triangle leg:";
    cin >> second;

    double hypotenuse = sqrt(pow(first, 2) + pow(second, 2));

    cout << "Hypotenuse length: "<<hypotenuse << endl;
};

