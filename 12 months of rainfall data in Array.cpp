#include<iostream>
using namespace std;
int main() {
    double rainfall[12];
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for(int i = 0; i < 12; i++) {
        cout << "Enter rainfall for " << months[i] << ": ";
        cin >> rainfall[i];
    }

    double totalRainfall = 0;
    for(int i = 0; i < 12; i++) {
        totalRainfall += rainfall[i];
    }

    double averageRainfall = totalRainfall / 12;

    int highestMonth = 0;
    int lowestMonth = 0;
    for(int i = 1; i < 12; i++) {
        if(rainfall[i] > rainfall[highestMonth]) {
            highestMonth = i;
        }
        if(rainfall[i] < rainfall[lowestMonth]) {
            lowestMonth = i;
        }
    }

    cout << "Total rainfall for the year: " << totalRainfall << endl;
    cout << "Average monthly rainfall: " << averageRainfall << endl;
    cout << "Month with highest rainfall: " << months[highestMonth] << endl;
    cout << "Month with lowest rainfall: " << months[lowestMonth] << endl;

    return 0;
}
