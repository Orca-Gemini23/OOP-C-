#include <iostream>
using namespace std;

// linked list 
// access :: O(n)
// insertion :: O(n)

struct Node{
    int data;
    struct Node *link; // address of the head node and gives us 
    // the access of the complete list 
};

void print(Node* n){  // traversal the linked list..
    while(n != NULL){
        cout << n->data << " " << endl;
        n = n->link;
    }
}
// alternate method:
/* void print(Node* temp){
    while(temp->link != NULL){ // just like the head..
        temp = temp->link;
    }
}
*/
// also the address of different node can be different .
int main(){
    Node *head;
    head = NULL;  // pointing to address which is null also the current
    // list is empty.
    Node *one = NULL;
    Node *two = NULL;

    head = new Node();
    one = new Node();
    two = new Node();

    head->data = 5;
    head->link = one;
    one->data = 10;
    one->link = two;
    two->data = 12;
    two->link = NULL;

    print(head);
    return 0;


}