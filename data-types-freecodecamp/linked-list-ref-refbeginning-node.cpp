#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void insertBeg(Node **head_ref, int new_data){
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node; // pointing to the node after head
}

void print(Node *n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
}
int main(){
    Node *head = NULL;
    Node *one = NULL;
    Node *two = NULL;
    

    head = new Node();
    one = new Node();
    two = new Node();
    

    head->data = 1;
    head->next = one;
    one->data = 2;
    one->next = two;
    two->data = 3;
    two->next = NULL;
    insertBeg(&head, 5); 
    insertBeg(&head, 4);   
    print(head);

    return 0;
}