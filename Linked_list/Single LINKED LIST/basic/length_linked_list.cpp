#include<bits/stdc++.h>
using namespace std;
class Traversal {
    public:
    int data;
    Traversal* next;
     Traversal(int data1,Traversal* next1){
        data=data1;
        next=next1;
     }
     Traversal(int data1){
        data=data1;
        next=nullptr;
     }
};
Traversal* Travel(vector<int>&arr){
    Traversal* head=new Traversal(arr[0]);
    Traversal* temp=head;
    for(int i=1;i<arr.size();i++){
        Traversal* show=new Traversal(arr[i]);
        temp->next=show;
        temp=show;
    }
    return head;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Traversal* head=Travel(arr);
    Traversal* show=head;
    int count=0;
    while (show)
    {
        // cout<<show->data<<"  ";
        show=show->next;
       count++;

    }
    cout<<count;
    
}