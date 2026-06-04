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
Node* second(Node* root,unordered_map<Node*,Node*>&mp,int start){
    queue<Node*>q;
    q.push(root);
    Node* startNode=nullptr;
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
         auto temp=q.front();
         q.pop();
         if(temp->data==start){
            startNode=temp;
         }
         if(temp->left){
            mp[temp->left]=temp;
            q.push(temp->left);
         }
         if(temp->right){
            mp[temp->right]=temp;
            q.push(temp->right);
         }
        }
    }
    return startNode;
}
void timeburned(Node* root ,int start){
    unordered_map<Node*,Node*>mp;
    Node* head=second(root,mp,start);
    unordered_map<Node*,int>vis;
    queue<Node*>q;
    q.push(head);
    vis[head]=1;
    int sec=0;
    while(!q.empty()){
        int n=q.size();
        bool burn=true;
        for(int i=0;i<n;i++){
            auto temp=q.front();
            q.pop();

            if(temp->left && !vis[temp->left]){
                vis[temp->left]=1;
                burn=false;
                q.push(temp->left);
            }
            if(temp->right && !vis[temp->right]){
                vis[temp->right]=1;
                burn=false;
                q.push(temp->right);
            }
            if(mp.find(temp)!=mp.end() && !vis[mp[temp]]){
                vis[mp[temp]]=1;
                burn=false;
                q.push(mp[temp]);
            }
            if(burn) sec++;
        }
    }
    cout<<sec;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    timeburned(root,2);
return 0;
}