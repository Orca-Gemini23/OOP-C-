// Trees to store data in hierachy method 
// Also to provide moderate access/search (quicker than
// linked list and slower than arrays) 

/* Trees provide moderate insertion/deletion (quicker than
arrays and slower than unordered linked list) 

Trees dont have upper limit on number of nodes 
as nodes are linked through pointers 

Tree contains data, pointer to the left child and pointer 
to the right child.. */ 

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        // allocating that data variable to x :: 
        left = NULL;
        // whenever call it assigns 
        // the children to be null .. 
        right = NULL; 
    }
};
// Also tree is hierachial data structure .. 
int main(){
    struct Node* root = new Node();
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(5);
    return 0;
}