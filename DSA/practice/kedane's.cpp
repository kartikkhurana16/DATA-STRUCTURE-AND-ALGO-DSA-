#include<iostream>
using namespace std;
int main()
{
    int curSum=0,maxSum,i;
    int array[]={3,-4,5,4,-1,7,-8};

    for(i=0;i<=6;i++)
    {
        curSum+=array[i];
       maxSum==max(curSum,maxSum);
        if(curSum<0)
        {
            curSum=0;
        }
    }
    return maxSum;
}