#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data=val;
        left=right=nullptr;
    }
};
vector<int> func(TreeNode* root,vector<int>&ans){
    if(root==nullptr)
    {
        return ans;
    }
    func(root->left,ans);
    ans.push_back(root->data);
    func(root->right,ans);
    return ans;
}
int main(){
    TreeNode* root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(3);
    vector<int>ans;
    func(root,ans);

    for(int i:ans){
        cout<<i;
    }
    return 0;
}