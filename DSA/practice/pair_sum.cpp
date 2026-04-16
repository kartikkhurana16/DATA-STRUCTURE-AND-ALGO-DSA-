#include<iostream>
using namespace std;
    int main()
    {
        int nums[4]={2,7,11,15};
        int n=4;
        int target = 9;
        int sum,ans;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=n-1;j<0;j--)
        //     {
        //         sum=nums[i]+nums[j];
        //         if(target==sum)
        //         {
        //             cout<<sum;
        //         }
        //     }
        // }
        // return 0;
        int i=0,j=n-1;
        while (i<j)
        {
            sum=nums[i]+nums[j];
            if(sum>target)
            {
                j--;
            }
            else if (sum<target)
            {
                i++;
            }
            else if (sum==target){
                cout<<nums[i]<<nums[j];
            }
            
        }
        
    } 