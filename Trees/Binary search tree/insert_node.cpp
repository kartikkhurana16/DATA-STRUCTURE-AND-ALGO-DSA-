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
TreeNode* func(TreeNode* root,TreeNode* temp){
    TreeNode* curr=root;
    while(true){
    if(curr->val<temp->val){
        if(curr->right){
            curr=curr->right;
        }
        else{
            curr->right=temp;
            break;
        }
    }
    else{
        if(curr->left){
            curr=curr->left;
        }
        else{
            curr->left=temp;
            break;
        }
    }
}
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