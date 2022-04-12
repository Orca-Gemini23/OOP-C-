// Name: Yash Patel
// Roll no: E224 
// SAP ID: 70552100057 

// Program to implement a circular queue and do the operations like 
// insertion, deletion and display the list. 

#include <iostream>
using namespace std;

class Queue{
    private:
    int size;
    int *arr, front, rear;
    // pointer array used for reference here.

    public:
    // Using a constructor . 
    Queue(int s){
        front = -1;
        rear = -1;
        // setting both to -1.
        size = s;
        arr = new int[s];
        // array creating new blocks in the 
        // dynamic memory.
    }
    void Enqueue(int x);
    int Dequeue();
    void show();
};

void Queue::Enqueue(int x){
    if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))){
        cout << "Queue is full" << endl;
        cerr << "Error in insertion element" << endl;
        return; 
        // returning to go back to the initial state 
        // if a call is made to this particular function again.
    }
    else if(front == -1){
        // ideal case of insertion. 
        front = 0;
        rear = 0;
        arr[rear] = x;
    }
    else if(rear == size - 1 && front != 0){
        rear = 0;
        arr[rear] = x;
    }
    else{
        rear++;
        arr[rear] = x;
    }
}

int Queue::Dequeue(){
    if(front == -1){
        cout << "The Queue is empty" << endl;
        clog << "Error in deleting the element" << endl;
    }
    int x = arr[front];
    arr[front] = -1;
    // letting the front be -1 which means the 
    // front value of the queue is safe somewhere in the queue.
    if(front == rear){
        front = -1;
        rear = -1;
        // normal case.
    }
    else if(front == size - 1){
        front = 0;
    }
    else{
        front++;
        // if front is incremented that means the 
        // the value to be deleted is gone. 
    }
    return x;
}

void Queue::show(){
    if(front == -1){
        cout << "Queue is empty";
        cerr << "Error displaying the queue" << endl;
    }
    if(rear >= front){
        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
    }
    else{
        for(int i = front; i < size; i++){
            cout << arr[i] << " ";
    }
        for(int i = 0; i <= rear; i++){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    Queue q(5);
    q.Enqueue(14);
    q.Enqueue(22);
    q.Enqueue(13);
    q.Enqueue(-6);
    q.Enqueue(16);

    q.show();
    q.Dequeue();
    cout << endl;
    // 
    q.show();
    return 0;
}