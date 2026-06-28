#include<bits/stdc++.h>
#define PI 3.1415926
using namespace std;
double func(double x,double b,double c){
    double ans=((x*x)+(b*x)+c)/sin(x);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int b,c;
    for(int i=0;i<n;i++){
        cin>>b>>c;
        double mini=1e18;
        double step=1e-6;

        for(double i=step;i<PI/2;i+=step){
            double temp= func(i,b,c);
            mini=min(mini,temp);
        }
        cout<<mini;
    }
    return 0;
}