#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void printList(Node *n){ // starting from the given node
    while(n != NULL){
        cout << n->data << " ";  //outputting the data
        n = n->next; // pointing to the address of the next node
    }
}

int main(){
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second ;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    return 0;
}