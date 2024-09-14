#include<iostream>
using namespace std;

int main() {
    int ages[10];
    cout << "Enter ages of 10 students: ";
    for(int i = 0; i < 10; i++) {
        cin >> ages[i];
    }

    int largest = ages[0];
    for(int i = 1; i < 10; i++) {
        if(ages[i] > largest) {
            largest = ages[i];
        }
    }

    cout << "Largest age is: " << largest << endl;

    return 0;
}

