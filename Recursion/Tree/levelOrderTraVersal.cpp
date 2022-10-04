#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    queue<BinaryTreeNode<int>*>q;
    if(!root)
        return ans;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
            BinaryTreeNode<int> *node=q.front();
            q.pop();
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
            ans.push_back(node->val);
        }
    }
     return ans;
}