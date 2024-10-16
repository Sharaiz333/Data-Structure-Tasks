#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};

class Queue {
    Node *front, *rear;
    int count; 

public:
    Queue() : front(0), rear(0), count(0) {}

    // Inserting item in queue//
    void Enqueue(int data) {
        Node *newnode = new Node; 
        newnode->value = data;    
        newnode->next = 0; 

        if (front == 0) {
            front = rear = newnode; 
        } else {
            rear->next = newnode; 
            rear = newnode;       
        }
        count++; 
    }

    // Removing item from queue
    void DeQueue() {
        if (front == 0) {
            cout << "Queue is Empty" << endl;
            return;
        } 

        Node *temp = front;
        front = front->next;
        delete temp; 
        count--; 
    }

    // Displaying items in Queue//
    void Display() {
        Node *temp = front;
        while (temp != 0) {
            cout << temp->value << "\t";
            temp = temp->next;
        }
        cout << endl;
    }

    // Getting the count of elements in the queue//
    int Size() {
        return count;
    }
};

int main() {
    Queue q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    cout << "Queue after Enqueue:" << endl;
    q.Display();
    cout << "Current size of the queue: " << q.Size() << endl;

    q.DeQueue();
    cout << "Queue after Dequeue:" << endl;
    q.Display();
    cout << "Current size of the queue: " << q.Size() << endl;

    return 0;
}

