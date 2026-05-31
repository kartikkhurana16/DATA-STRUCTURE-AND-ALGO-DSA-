#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode*left;
    TreeNode*right;

    TreeNode(int data){
        val =data;
        left=right=nullptr;
    }
};

void topview(TreeNode* root){
    map<int,TreeNode*>mp;
    queue<pair<TreeNode*,int>>q;
    
    q.push({root,0});
    while (!q.empty()){
        auto temp=q.front();
        q.pop();

        auto node=temp.first;
        int x=temp.second;

        // if(mp.find(x)==mp.end()){
            mp[x]=node;
        // }

        if(node->left){
            q.push({node->left,x-1});
        }
        if(node->right){
            q.push({node->right,x+1});
        }
    }
    for(auto &i : mp){
    cout<<i.second->val;

    }
}
int main(){

     // Constructing the tree:
    //
    //          1
    //        /   \
    //       2     3
    //      / \   / \
    //     4   5 6   7
    //        /     /
    //       8     9
    //

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    root->left->right->left = new TreeNode(8);
    root->right->right->left = new TreeNode(9);

    topview(root);

    return 0;
}

