#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
bool check(TreeNode* leftroot,TreeNode* rightroot){
    if(leftroot==nullptr && rightroot==nullptr) return true;
    if(leftroot==nullptr || rightroot==nullptr) return false;

    if(leftroot->val!=rightroot->val) return false;

    return check(leftroot->left,rightroot->right) && check(leftroot->right,rightroot->left);
}
bool symmentric(TreeNode* root){
    return root->left==root->right || check(root->left,root->right);
}
int main() {

    /*
            1
          /   \
         2     2
        / \   / \
       3   4 4   3
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    
    if(symmentric(root))
    cout << "true";
    else
    cout << "false";
    return 0;
}