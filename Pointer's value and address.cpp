#include<iostream>
using namespace std;
int main() {
    int var = 10;

    int *ptr;

    ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value at address ptr: " << *ptr << endl;

    return 0;
}

