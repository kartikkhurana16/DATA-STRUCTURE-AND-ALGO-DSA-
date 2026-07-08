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
TreeNode* func(TreeNode* root,int target){
    
    if(root->val==target){
        cout<<"found";
        return 0; 
    }
    else if(root->val<target){
        func(root->right,target);
    }
    else{
        func(root->left,target);
    }
    return 0;
}
int main() {

    TreeNode* root = new TreeNode(1);

   
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    // Right subtree
    root->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    int target;
    cin>>target;
    func(root,target);
    
    return 0;
}