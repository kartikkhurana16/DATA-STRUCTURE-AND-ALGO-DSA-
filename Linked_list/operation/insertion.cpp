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
Node* Print(Node* head){
    Node* temp=head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return head;
    
}
int main(){
    vector<int>arr={1,2,3,5};
    Node* head=Convert(arr);
    Node* temp=head;
    int k;
    cout<<"k : ";
    cin>>k;
    int count=1;
    while(temp!=NULL){
    
        if(count==k-1){
            Node* x=new Node(k);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
        count++;
    }
    Print(head);
}