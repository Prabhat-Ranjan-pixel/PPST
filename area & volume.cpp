#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cout << "Choose an option:\n 1 Area of Circle \n 2 Area of Triangle \n 3 Area of Rectangle \n 4 Volume of Sphere \n 5 Volume of Cuboid" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> a;

    switch(a) {
        case 1: {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;
            float area = 3.14 * radius * radius;
            cout << "Area of Circle = " << area << endl;
            break;
        }
        case 2: {
            float base, height;
            cout << "Enter base and height: " << endl;
            cin >> base >> height;
            float area = 0.5 * base * height;
            cout << "Area of Triangle = " << area << endl;
            break;
        }
        case 3: {
            float length, breadth;
            cout << "Enter length and breadth: ";
            cin >> length >> breadth;
            float area = length * breadth;
            cout << "Area of Rectangle = " << area << endl;
            break;
        }
        case 4: {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;
            float volume = (4.0/3.0) * 3.14 * pow(radius, 3);
            cout << "Volume of Sphere = " << volume << endl;
            break;
        }
        case 5: {
            float length, breadth, height;
            cout << "Enter length, breadth, and height: " << endl;
            cin >> length >> breadth >> height;
            float volume = length * breadth * height;
            cout << "Volume of Cuboid = " << volume << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}