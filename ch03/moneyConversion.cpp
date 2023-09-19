#include <iostream>
using namespace std;

int main(){
    double ratio = 0.727802;
    double dollars;


    cout << "How much dollars do you want to exchange:";
    cin >> dollars;

    double euros = dollars * ratio;
    
    cout << "Amount in euros: " << euros << endl;
}