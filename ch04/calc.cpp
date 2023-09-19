#include <iostream>
using namespace std;

int main(){
	int first_input;
	int second_input;
	
	
	cout << "Input first integer:";
	cin >> first_input;
	cout << "Input second integer:";
	cin >> second_input;
    int sum = first_input + second_input;
    int sub = first_input - second_input;
    int mul = first_input * second_input;
    double remainder = first_input % second_input;
    cout << first_input << "+" << second_input << " = " << sum << endl; 
    cout << first_input << "-" << second_input << " = " << sub << endl; 
    cout << first_input << "*" << second_input << " = " << mul << endl; 
    cout << "Remainder: " << remainder << endl; 


}