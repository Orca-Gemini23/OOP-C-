/* Trees :: 
Uses : 
Representing hierachial data 
compilers 
auto completion (completing the passwords)
compression like jpeg and mp3.


*/

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


// Creating a new node .. 
Node* new_node(int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->left = new_node->right = NULL;
    return new_node;
    // returning so that we get the key back .. 
}

void inorderTraversal(Node* root){
    if(temp != NULL){
        inorder(root->left);
        cout << root->data << "->";
        inorder(root->right);
}

// inserting a node.. 
Node* insert(Node* node, int data){
    if(node == NULL){
        return new_node(data);
    }
}

