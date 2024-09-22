#include <iostream>
using namespace std;

class Queue {
private:
	int *arr;
	int front, rear, size;

public:
	Queue() {
		front = rear = -1;
		size = 0;
		arr = new int[10];
	}

	void enqueue(int x) {
		if (size == 10) {
			cout << "Queue is full!" <<endl;
			return;
		}
		arr[++rear] = x;
		size++;
	}

	void dequeue() {
		if (isEmpty()) {
			cout << "Queue is empty!" <<endl;
			return;
		}
		front++;
		size--;
	}

	bool isEmpty() {
		return (front == rear);
	}

	void display() {
		for (int i = front + 1; i <= rear; i++) {
			cout << arr[i] << " ";
		}
		cout <<endl;
	}
};

int main() {
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.display(); 
	q.dequeue();
	q.display();
	q.dequeue();
	q.display();  
	cout<<boolalpha<< q.isEmpty()<<endl; 
	return 0;
}
