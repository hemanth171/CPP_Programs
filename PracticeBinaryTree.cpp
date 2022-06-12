#include <bits/stdc++.h>
using namespace std;

int mx = 0;

struct Node{
    int val;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int val){
    struct Node* node = new struct Node;
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int height(struct Node* root){
    if(root==NULL){
        return 0;
    }
    int ldepth = height(root->left);
    int rdepth = height(root->right);
    mx = max(ldepth,rdepth) + 1;
    return mx;
}

int main(){
    struct Node* root = newNode(2);
    // root->left = newNode(2);
    root->right = newNode(1);
    root->right->left = newNode(3);

    cout << height(root) << endl;
    return 0;
}