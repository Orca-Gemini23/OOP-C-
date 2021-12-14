#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
// To delete a node from the linked list, we need to do the following steps. 
// 1) Find the previous node of the node to be deleted. 
// 2) Change the next of the previous node. 
// 3) Free memory for the node to be deleted.

// inserts a new node on the front of the list..
void push(Node **head_ref, int new_data){
    Node *new_node = NULL;
    new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref); // better to use brackets.

    (*head_ref) = new_node;
}

void delete_node(Node** head_ref, int key){
    Node* temp = *head_ref; // store the head node..
    Node* prev = NULL; // and a empty node.

    if(temp != NULL && temp->data == key){
        // also the temp is holding the head-ref node.
        *head_ref = temp->next;
        // head now points to the second node and the first one 
        // should be free now 
        delete temp;
        return;
    }
    else{
        while(temp != NULL && temp->data != key){
            // here if the temp->data == key 
            // then woh hi node delete ho jayega. Also temp->data 
            // is holding the node of the head variable.
            prev = temp;
            // so we take a new node which stores the value of the 
            // node we want to delete .
            temp = temp->next;
            // here temp points to the next node. 
        }
    }
    if(temp == NULL){ // if the key was not present..
            return;
    }
   
    prev->next = temp->next; // unlinking the node.
    delete temp;
}

void print(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
}

int main(){
    Node *head = NULL; // dont create it in the heap.
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    
    delete_node(&head, 6);
    delete_node(&head, 2);
    print(head);
    return 0;
}