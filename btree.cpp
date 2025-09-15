#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr){}
};

void inorder(Node* root){
    if (!root) return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    inorder(root);
}