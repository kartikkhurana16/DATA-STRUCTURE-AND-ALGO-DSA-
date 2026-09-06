
// You are tasked with writing a program to calculate the total shipping cost based on the weight of the package and the distance it needs to travel. The following criteria determine the shipping cost:
// 1. Base money: $5.00 (must be included in the shipping cost)
// 2. Cost per kilogram: $2.00
// 3. Cost per 10 kilometers: $0.5

#include<bits/stdc++.h>
using namespace std;

int main(){
    int weight;
    int distance;

    cin >> weight >> distance;

    double baseCost = 5;
    double perkg = 2;
    double per10dist = 0.5;

    double perdist = distance / 10;
    cout<<perdist<<endl;
    double cost = baseCost + perkg * weight + perdist * 0.5;

    cout << cost;

    return 0;
}