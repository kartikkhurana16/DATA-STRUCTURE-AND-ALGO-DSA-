/*   brute force

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int show(vector<int>&arr,int target)
{
    int length=0;
    for(int i=0;i<arr.size();i++)
    {
        int sum=0;
        for(int j=i;j<arr.size();j++)
        {
            sum+=arr[j];

            if(sum==target)
            {
                length=max(length,j-i+1);
            }
        }
}
cout<<length;
}
int main()
{
vector<int>arr={9,4,20,3,10,5};
int target=33;
show(arr,target);
}
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int show(vector<int>&arr,int target)
{
    int length=0;
    for(int i=0;i<arr.size();i++)
    {
        int sum=0;
        for(int j=i;j<arr.size();j++)
        {
            sum+=arr[j];

            if(sum==target)
            {
                length=max(length,j-i+1);
            }
        }
}
cout<<length;
}
int main()
{
    vector<int>arr={1,2,1,2,1};
    int target=3;
    show(arr,target);
}
