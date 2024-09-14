#include <iostream>
#define max 1000
using namespace std;

class Stack {
	private:
		int top;
		int arr[max];

	public:
		Stack() {
			top = -1;
		}

		bool push(int value) {
			if (top >= (max - 1)) {
				cout << "The stack is overflow." << endl;
				return false;
			} else {
				arr[++top] = value;
				cout << value << " pushed element into stack." << endl;
				return true;
			}
		}
		bool pop() {
			if (top < 0) {
				cout << "The stack is underflow." << endl;
				return false;
			} else {
				arr[top--] ;
				return true;
			}
		}
		bool peek(int &value) const {
			if (top < 0) {
				return false;
			} else {
				value= arr[top] ;

				return true;
			}
		}
};

int main() {
	int value;
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	if(s.peek(value)) {
		cout<<"Top element is:"<<value<<endl;
	}

	s.pop();
	if(s.peek(value)) {
		cout<<"Top element after pop is:"<<value<<endl;
	}
	return 0;
}
