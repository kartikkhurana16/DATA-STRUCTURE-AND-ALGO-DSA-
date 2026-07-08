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
TreeNode* func(TreeNode* root){
    TreeNode* curr=root;
    while(curr){
        if(curr->left){
            TreeNode* prev=curr->left;
            while(prev->right){
                prev=prev->right;
            }
            prev->right=curr->right;
            curr->right=curr->left;
            curr->left=nullptr;
        }
        curr=curr->right;
    }
    return root;
}
int main() {

    TreeNode* root = new TreeNode(1);

   
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    // Right subtree
    root->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    func(root);
    while(root){
        cout<<root->val;
        root=root->right;
    }
    return 0;
}