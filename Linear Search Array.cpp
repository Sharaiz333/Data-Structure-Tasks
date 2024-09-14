	
	#include <iostream>
	
	using namespace std;
	
	int main() {
	    int size, searchElement;
	
	    cout << "Enter the size of the array: ";
	    cin >> size;
	
	    int *arr = new int[size];
	
	    cout << "Enter " << size << " elements: ";
	    for (int i = 0; i < size; i++) {
	        cin >> arr[i];
	    }
	
	    cout << "Enter the element to search: ";
	    cin >> searchElement;
	
	    int found = 0;
	    for (int i = 0; i < size; i++) {
	        if (arr[i] == searchElement) {
	            found = 1;
	            cout << "Element found at index " << i << endl;
	            break;
	        }
	    }
	
	    if (found == 0) {
	        cout << "Element not found in the array." << endl;
	    }
	
	    return 0;
	}
