#include <iostream>
using namespace std;

int main() {
    // Constant for ocean level rise per year (in millimeters)
    const double OCEAN_RISE_PER_YEAR = 1.5;

    // Calculating ocean level in 5, 7, and 10 years
    double levelIn5Years = OCEAN_RISE_PER_YEAR * 5;
    double levelIn7Years = OCEAN_RISE_PER_YEAR * 7;
    double levelIn10Years = OCEAN_RISE_PER_YEAR * 10;

    // Display the results
    cout << "The ocean's level will be " << levelIn5Years << " mm higher in 5 years." << endl;
    cout << "The ocean's level will be " << levelIn7Years << " mm higher in 7 years." << endl;
    cout << "The ocean's level will be " << levelIn10Years << " mm higher in 10 years." << endl;

    return 0;
}