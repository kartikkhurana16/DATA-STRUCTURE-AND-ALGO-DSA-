#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};

bool LCA(TreeNode* root, int end,vector<TreeNode*>&arr)
{
    if(root==nullptr) return false;
    arr.push_back(root);
    if(root->data==end) return true ;

    if(LCA(root->left,end,arr)|| LCA(root->right,end,arr))
        return true;

    arr.pop_back();
    return false;
}

int main() {

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(5);
    root->right = new TreeNode(1);

    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);

    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    /*
                 3
               /   \
              5     1
             / \   / \
            6   2 0   8
               / \
              7   4
    */
   int p=6;
   int q=8;
    vector<TreeNode*>p1;
    vector<TreeNode*>q1;
    LCA(root,p,p1);
    LCA(root,q,q1);
TreeNode* ans;
    int x=p1.size();int y=q1.size();
    int n=min(x,y);
    for(int i=0;i<n;i++){
        if(p1[i]==q1[i]){
            ans=p1[i];
        }
        else{
            break;
        }
    }
    cout<<ans->data;
    return 0;
}