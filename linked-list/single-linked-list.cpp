#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; // pointer to next node
};

int main(){
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node(); // allocating 3 node in the heap
    second - new Node();
    third = new Node();

    head->data = 1;
    head->next = second; // linking first node with the second node
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    return 0;
}