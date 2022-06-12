#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int x) {
        data = x;
        left=right=NULL;
    }
};

void inOrder(Node *root) {
    if(!root)
        return;
    inOrder(root->left);
    cout << root->data << endl;
    inOrder(root->right);
}

int main() {
    Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(6);
    inOrder(root);
    return 0;
}