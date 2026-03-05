#include<bits/stdc++.h>
using namespace std;

void show(vector<int>& arr, int n)
{
   int i=0;
   for(int j=0;j<n;j++)
   {
    if(arr[j]!=0)
    {
        swap(arr[j],arr[i]);
        i++;
    }
   }

    for(int x : arr)
        cout << x << " ";
}

int main()
{
    vector<int> arr = {0,0,2, 0, 4, 5};
    int n = arr.size();
    show(arr, n);

    return 0;
}
