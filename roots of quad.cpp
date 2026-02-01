#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter coefficients a, b, c from ax2 + bx + c = 0: " << endl;
    cin >> a >> b >> c;

    float discriminant = b*b - 4*a*c;

    if(discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and distinct:\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if(discriminant == 0) {
        double root = -b / (2*a);
        cout << "Roots are real and equal:\n";
        cout << "Root = " << root << endl;
    }
    else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex:\n";
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}