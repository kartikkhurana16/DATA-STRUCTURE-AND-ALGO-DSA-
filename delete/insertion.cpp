#include <bits/stdc++.h>
using namespace std;
int main()
{

 int arr[]={3,2,5,1,4};   

 for(int i=0;i<5;i++)

 {
    int j=i;
    while (j>0 && arr[j-1]>arr[j])
    {
        swap(arr[j],arr[j-1]);
        j--;
    }

 }
for(int i=0;i<5;i++)
{
 cout<<arr[i]<<" ";
}
 return 0;
}