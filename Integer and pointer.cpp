#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter integer a: ";
    cin >> a;
    cout << "Enter integer b: ";
    cin >> b;

    int *ptrA, *ptrB;
    ptrA = &a;
    ptrB = &b;

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of ptrA: " << ptrA << endl;
    cout << "Value of ptrB: " << ptrB << endl;
    cout << "Value at address ptrA: " << *ptrA << endl;
    cout << "Value at address ptrB: " << *ptrB << endl;

    return 0;
}
