
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* Convert(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* DeleteHead(Node* head){
    Node* prev=head;
    head=head->next;

    head->back=nullptr;
    prev->next=nullptr;
    
    delete prev;
    return head;
}
void Print(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=Convert(arr);
    head=DeleteHead(head);
    Print(head);
    return 0;

}