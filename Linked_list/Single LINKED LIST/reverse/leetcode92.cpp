#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
void reverseList(Node* head,int x,int y){
    Node* dummy= new Node(0);
    dummy->next=head;
    Node* prevleft=dummy;
    for(int i=0;i<x-1;i++){
        prevleft=prevleft->next;
    }
    Node* temp=prevleft->next;
    Node* prev=nullptr;
    for(int i=0;i<=y-x;i++){
        Node* ans=temp->next;
        temp->next=prev;
        prev=temp;
        temp=ans;
    }
    prevleft->next->next=temp;
    prevleft->next=prev;
    
 Node* res = dummy->next;

while(res != nullptr){
    cout << res->data << " ";
    res = res->next;
}

}
int main() {

    // Create nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    int x,y;
    cin>>x>>y;
    reverseList(head,x,y);
    

    return 0;
}