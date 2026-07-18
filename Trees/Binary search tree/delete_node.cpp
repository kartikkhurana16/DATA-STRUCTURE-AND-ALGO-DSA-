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
TreeNode* func(TreeNode* root, TreeNode* target) {
    TreeNode* parent = nullptr;
    TreeNode* curr = root;

    while (curr && curr->val != target->val) {
        parent = curr;
        if (target->val < curr->val)
            curr = curr->left;
        else
            curr = curr->right;
    }

    if (curr == nullptr)
        return root;

    // deleting root
    if (parent == nullptr) {
        if (curr->left == nullptr) {
            TreeNode* temp = curr->right;
            delete curr;
            return temp;
        }

        TreeNode* temp = curr->left;
        TreeNode* rightSubtree = curr->right;

        TreeNode* p = temp;
        while (p->right)
            p = p->right;

        p->right = rightSubtree;

        delete curr;
        return temp;
    }

    TreeNode* temp;

    if (curr->left != nullptr) {  
        temp = curr->left;

        if (parent->left == curr)
            parent->left = temp;
        else
            parent->right = temp;

        while (temp->right)
            temp = temp->right;

        temp->right = curr->right;
    }
    else {
        temp = curr->right;

        if (parent->left == curr)
            parent->left = temp;
        else
            parent->right = temp;
    }

    delete curr;
    return root;
}    

void print(TreeNode* root){
    if(root==nullptr){
        return;
    }
    
    print(root->left);
    cout<<root->val;
    print(root->right);
}
int main() {

    TreeNode* root = new TreeNode(8);

root->left = new TreeNode(3);

root->right = new TreeNode(10);

root->left->left = new TreeNode(1);

root->left->right = new TreeNode(6);

root->left->right->left = new TreeNode(4);

root->left->right->right = new TreeNode(7);

root->right->right = new TreeNode(14);

root->right->right->left = new TreeNode(13);

    int target;
    cin>>target;
    TreeNode* temp=new TreeNode(target);
    func(root,temp);
    print(root);
    return 0;
}