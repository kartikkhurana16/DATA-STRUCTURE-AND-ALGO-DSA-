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
stack<TreeNode*>st;
TreeNode* func(TreeNode* root){
    TreeNode* curr=root;
    st.push(curr);
    while(!st.empty()){
        auto temp=st.top();
        st.pop();
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
        if(curr != nullptr){
        curr->right=temp;
        curr->left=nullptr;
        }
        curr=temp;
    }
    curr->left = nullptr;
    curr->right = nullptr;
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