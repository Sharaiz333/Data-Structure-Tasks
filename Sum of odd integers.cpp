#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: "<<endl;
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " integers: "<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    cout << "Sum of odd integers: " << sum << endl;


    return 0;
}

