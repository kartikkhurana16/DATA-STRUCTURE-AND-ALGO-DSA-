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
vector<int> traversal(Node* root){
    vector<int>arr;
    Node* curr=root;
    while(curr!=nullptr){
    if(curr->left==nullptr){
        arr.push_back(curr->data);
        curr=curr->right;
    }
    else{
        Node* prev=curr->left;
        while(prev->right && prev->right!=curr){
            prev=prev->right;
        }
        if(prev->right == nullptr){
            prev->right=curr;
            arr.push_back(curr->data);      //          preorder traversal
            curr=curr->left;
        }
        else{
            prev->right=nullptr;
            curr=curr->right;
        }
    }
}
    return arr;
}
int main()
{   
    Node* root=new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->right= new Node(6);

    vector<int>temp=traversal(root);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}