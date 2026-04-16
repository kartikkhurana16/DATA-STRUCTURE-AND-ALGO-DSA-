#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node* prev;

    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
Node* Convert(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* DeleteTail(Node* head){
    Node* prev=head;
    while(prev->next->next!=nullptr){
        prev->next=prev;
    }
    delete prev->next;
    prev->next=nullptr;
    return head;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=Convert(arr);
    DeleteTail(head);
    cout<<head;
    return 0;
}