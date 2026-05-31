#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
vector<int> preorder(Node* root){
    vector<int>ans;
    if(root == NULL) return {};
    stack<Node*>s;
    s.push(root);
    while(!s.empty()){
        Node* temp=s.top();
        s.pop();
        ans.push_back(temp->data);
        if(temp->right!=NULL) {
            s.push(temp->right);
        }
        if(temp->left!=NULL){
            s.push(temp->left);
        }
    }
    return ans;
}
int main() {
    Node* root=new Node(1);
    root->left=new Node(2);  
    root->left->left=new Node(4);  
    root->left->right=new Node(5);  
    root->right=new Node(3);  
    root->right->left=new Node(6);  
    root->right->right=new Node(7);  

    vector<int>arr=preorder(root);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}