#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

void input(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void deletion(Node **head_ref, int position){
    if(*head_ref == NULL){
        return;
    }
    Node* temp = *head_ref;
    // if the position is 0 then it is the 
    // head node itself..
    if(position == 0){
        *head_ref = temp->next;
        delete temp;
        return;
    }
    for(int i = 0; temp == NULL && i < position - 1; i++){
        temp = temp->next; // the node to be deleted.
    }
    if(temp == NULL || temp->next == NULL){
        return;
    }
    Node* next = temp->next->next; 
    // stores pointer to the next of the next of the node 
    // to be deleted. 
    delete temp->next;
    temp->next = next;
}

void print(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
}
int main(){
    Node* head = NULL;
    input(&head, 5);
    input(&head, 6);
    deletion(&head, 0);
    print(head);           
    return 0;
}