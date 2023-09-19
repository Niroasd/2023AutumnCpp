#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double input;
    double pi = 3.142;

    cout << "Input circle radius:";
    cin >> input;
    
    double radius = pi * pow(input, 2);

    cout << "Circle area with the given radius:" << radius;

}