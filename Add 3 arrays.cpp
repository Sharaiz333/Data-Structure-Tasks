#include<iostream>
using namespace std;
int main() {
	int size;
	cout<<"Enter the size of the array:"<<endl;
	cin>>size;
    int arr1[size], arr2[size], arr3[size], sum[size];

    cout << "Enter elements of first array: "<<endl;
    for(int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array: "<<endl;
    for(int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    cout << "Enter elements of third array: "<<endl;
    for(int i = 0; i < size; i++) {
        cin >> arr3[i];
    }

    for(int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i] + arr3[i];
    }

    cout << "Sum of arrays is: "<<endl;
    for(int i = 0; i < size; i++) {
        cout << sum[i] << " ";
    }

    return 0;
}
