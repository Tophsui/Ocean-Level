#include <iostream>
using namespace std;

int main() {
    // Variable for user input
    double oceanRisePerYear;

    // Get input from user
    cout << "Enter the number of millimeters the ocean's level rises per year: ";
    cin >> oceanRisePerYear;

    // Calculating ocean level in 5, 7, and 10 years
    double levelIn5Years = oceanRisePerYear * 5;
    double levelIn7Years = oceanRisePerYear * 7;
    double levelIn10Years = oceanRisePerYear * 10;

    // Display the results
    cout << "The ocean's level will be " << levelIn5Years << " mm higher in 5 years." << endl;
    cout << "The ocean's level will be " << levelIn7Years << " mm higher in 7 years." << endl;
    cout << "The ocean's level will be " << levelIn10Years << " mm higher in 10 years." << endl;

    return 0;
}