#include<iostream>
using namespace std;
int main() {
    int arr[10];

    cout << "Enter 10 values: "<<endl;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];
    for(int i = 1; i < 10; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest value: " << largest << endl;
    cout << "Smallest value: " << smallest << endl;

    return 0;
}

