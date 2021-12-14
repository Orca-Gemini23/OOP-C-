#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void append(Node  **head_ref, int new_data){
    Node* new_node = new Node();
    Node* last = *head_ref; // pointing to the last node after 
    // which the new node is going to be placed..

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}

void print(Node *n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
}

int main(){
    Node* head = new Node();
    Node* one = new Node();

    head->data = 2;
    head->next = one;
    one->data = 3;
    one->next = NULL;
    append(&one, 5); 
    // using '&' as **head_ref refers to the 
    // address of the &one;
    print(head);
    return 0;
}