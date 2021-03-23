#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left, *right;
};

struct Node* newNode(int data){
    struct Node* node=new Node;
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

void inOrder(Node* root){
    if(root != NULL){
        inOrder(root->left);
        cout << root->data << endl;
        inOrder(root->right);
    }
}

void preOrder(Node* root){
    if(root!=NULL){
        cout << root->data << endl;
        inOrder(root->left);
        inOrder(root->right);
    }
}

bool isBSTUtil(Node* root, Node* left, Node* right){
    if(root==NULL){
        return true;
    }
    if(left !=NULL && root->data <= left->data){
        return false;
    }
    if(right !=NULL && root->data >= right->data){
        return false;
    }
    return isBSTUtil(root->left,left,root) && isBSTUtil(root->right,root,right);
}

bool isBST(Node* root) {
    return isBSTUtil(root,NULL,NULL);
}

int main(){
    struct Node *root = newNode(4);
    root->left=newNode(2);
    root->right=newNode(5);
    root->left->left=newNode(1);
    root->left->right=newNode(3);
    // root->right->left=newNode(4);
    root->right->right=newNode(6);

    // inOrder(root);
    // cout << "##########" << endl;
    // preOrder(root);
    cout << isBST(root) << endl;

    return 0;
}