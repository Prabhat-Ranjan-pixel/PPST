#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    float p, r, t, CI;

    cout << "Enter Principal amount: ";
    cin >> p;

    cout << "Enter Rate of interest (% per year): ";
    cin >> r;

    cout << "Enter Time (in years): ";
    cin >> t;

    CI = p * pow((1 + r / 100), t) - p;

    cout << "Compound Interest = " << CI << endl;

    return 0;
}