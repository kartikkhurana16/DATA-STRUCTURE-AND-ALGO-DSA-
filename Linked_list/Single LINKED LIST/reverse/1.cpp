#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node(int val)
{
    data=val;
    next=nullptr;
}
};
void reverselinkedlist(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=nullptr){
        Node* ans=temp->next;
        temp->next=prev;
        prev=temp;
        temp=ans;
    }
    
    Node* let=prev;
    while(let!=nullptr){
        cout<<let->data<<" ";
        let=let->next;
    }   
}
int main(){
    Node* head =new Node(1);
    head->next =new Node(2);
    head->next->next =new Node(3);
    head->next->next->next =new Node(4);
   
    reverselinkedlist(head);
    return 0;

}