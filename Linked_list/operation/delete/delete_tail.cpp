#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* Convert(vector<int>&arr){
    
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    
    return head;
}
Node* DeteleTail(Node* head){
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr; 
    return head;
}

Node* Print(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
int main(){
    vector<int>arr={1,2,3,5};
    Node* head=Convert(arr);   
    head=DeteleTail(head);
    Print(head);
}