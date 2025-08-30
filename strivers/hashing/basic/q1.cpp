#include<iostream>
using namespace std;
int arr[5];
int start(int number)
{
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==number)
        {
            count++;
        }
    }
    cout<<count;
}
int main()
{
    cout<<"list of number";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int n;
    cout<<"enter number u wanna find "<<endl;
    cin>>n;

    start(n);
    return 0;
}