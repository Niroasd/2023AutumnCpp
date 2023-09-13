/*  g++ -o myprogram .\ch02\src\main.cpp to compile

    run the exe to execute
*/

#include <iostream>
using namespace std;

int main(){
    int number;
    int square;

    cout << "give number to square up: " << endl;
    cin >> number;

    square = number * number;

    cout << "square: " << square <<endl;
}