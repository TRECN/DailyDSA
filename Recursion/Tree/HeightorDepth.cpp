#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int depth(Node *root){
    if(root==NULL){
        return 0;
    }
    int l=depth(root->left);
    int r=depth(root->right);
    return 1+max(l,r);
}

int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(3);
    cout<<depth(root);
}