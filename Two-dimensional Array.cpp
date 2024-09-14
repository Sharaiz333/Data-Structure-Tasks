#include<iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: "<<endl;
    cin >> rows;
    cout << "Enter number of columns: "<<endl;
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter elements of 2D array: "<<endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    long long multiplication = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            multiplication *= arr[i][j];
        }
    }

    double average = (double)sum / (rows * cols);

    cout << "Sum of all numbers: " << sum << endl;
    cout << "Multiplication of all numbers: " << multiplication << endl;
    cout << "Average of all numbers: " << average << endl;

    return 0;
}
