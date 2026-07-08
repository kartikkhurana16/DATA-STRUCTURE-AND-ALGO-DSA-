#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
int func(TreeNode* root,int target){
    if(root==nullptr){
        return -1;
    }

    if(root->val==target){
        return root->val;
         
    }
    if(root->val<target){
        return func(root->right,target);
    }
    int ceilvalue=func(root->left,target);
    if(ceilvalue>=target){
        return ceilvalue;
    }
    return root->val;
}
int main() {

    TreeNode* root = new TreeNode(8);

    root->left = new TreeNode(4);

    root->right = new TreeNode(12);

    root->left->left = new TreeNode(2);

    root->left->right = new TreeNode(6);

    root->right->left = new TreeNode(10);

    root->right->right = new TreeNode(14);

    int target;
    cin>>target;
    int ans=func(root,target);
    cout<<ans;
    return 0;
}