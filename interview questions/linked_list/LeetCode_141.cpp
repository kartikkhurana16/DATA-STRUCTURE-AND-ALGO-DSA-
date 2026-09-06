#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
    }
};
bool func(Node* head,unordered_map<Node*,int>&mp){
    if(head==nullptr){
        return false;
    }
    if(mp.find(head)!=mp.end()){
        return true;
    }
    mp[head]++;
    return func(head->next,mp);
}
int main(){
    Node* head=new Node(3);
    head->next=new Node(2);
    head->next->next=new Node(0);
    head->next->next->next=new Node(-4);
    head->next->next->next->next=head->next;

    unordered_map<Node*,int>mp;
    cout<<func(head,mp);
    return 0;
}