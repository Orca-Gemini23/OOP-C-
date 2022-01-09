#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void append(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){
        *head_ref = new_node;
    }
    Node* last_ref = *head_ref;
    while(last_ref->next != NULL){
        last_ref = last_ref->next;        
    }
    last_ref->next = new_node;
    return;
}

void print_list(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
}



int main(){
    Node* head = NULL;
    push(&head, 5);
    push(&head, 6);
    insertAfter(head, 4);
    insertAfter(head, 3);
    append(&head, 23);
    print_list(head);
    return 0;
}