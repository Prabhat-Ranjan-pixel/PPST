#include <iostream>
using namespace std;

int main() {
    float a, b;
    char c;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> c;

    cout << "Enter second number: ";
    cin >> b;

    switch(c) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if(b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}