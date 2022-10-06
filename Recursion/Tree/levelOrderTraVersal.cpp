#include <bits/stdc++.h> 
/************************************************************


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