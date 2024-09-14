#include<iostream>
using namespace std;
int main() {
    int a, b;

    cout << "Enter first variable: "<<endl;
    cin >> a;
    cout << "Enter second variable: "<<endl;
    cin >> b;

    cout << "Before swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int *pa = &a;
    int *pb = &b;
    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    cout << "After swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

