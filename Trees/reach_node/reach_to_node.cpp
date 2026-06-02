#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};
bool dfs(Node* root,vector<Node*>&ans,Node* end){
    if(root==nullptr) return false;
    ans.push_back(root);
    if(root==end) return true;
    if(dfs(root->left,ans,end)|| dfs(root->right,ans,end)) return true;

    ans.pop_back();
    return false;
}
vector<Node*> reach(Node* root,Node* end){
    vector<Node*>ans;
    dfs(root,ans,end);
    return ans;
}
int main(){
    /*
            1
          /   \
         2     3
        / \   / \
       4   5 6   7
    */
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    
    Node* end=root->right->right;
    vector<Node*>ans=reach(root,end);
    for(auto i:ans){
        cout<<i->data;
    }
    return 0;
}