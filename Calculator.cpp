#include<iostream>
using namespace std;
int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

double division(int a, int b) {
    return (double)a / b;
}

int multiplication(int a, int b) {
    return a * b;
}

double power(int number, int power) {
    double result = 1;
    for(int i = 0; i < power; i++) {
        result *= number;
    }
    return result;
}

void menu() {
    int choice;
    cout << "Select an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplication" << endl;
    cout << "5. Power" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    int a, b;
    switch(choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << addition(a, b) << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << subtraction(a, b) << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if(b != 0)
                cout << "Result: " << division(a, b) << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << multiplication(a, b) << endl;
            break;
        case 5:
            cout << "Enter a number and its power: ";
            cin >> a >> b;
            cout << "Result: " << power(a, b) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

int main() {
    menu();
    return 0;
}
