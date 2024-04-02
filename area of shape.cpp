#include<iostream>
#include<cmath>

using namespace std;

int main() {
    char choice;

    do {
        cout << "Choose a shape to calculate area:" << endl;
        cout << "1. Circle" << endl;
        cout << "2. Square" << endl;
        cout << "3. Rectangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch(choice) {
            case '1': // Circle
                {
                    double radius;
                    cout << "Enter the radius of the circle: ";
                    cin >> radius;
                    double area = M_PI * pow(radius, 2);
                    cout << "Area of the circle: " << area << endl;
                    break;
                }
            case '2': // Square
                {
                    double side;
                    cout << "Enter the side length of the square: ";
                    cin >> side;
                    double area = pow(side, 2);
                    cout << "Area of the square: " << area << endl;
                    break;
                }
            case '3': // Rectangle
                {
                    double length, width;
                    cout << "Enter the length of the rectangle: ";
                    cin >> length;
                    cout << "Enter the width of the rectangle: ";
                    cin >> width;
                    double area = length * width;
                    cout << "Area of the rectangle: " << area << endl;
                    break;
                }
            case '4':
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }

    } while (choice != '4');

    return 0;
}
