//Given two arrays, score (an array of integers) and names (an array of strings representing candidate names), where each names[i] corresponds to a score[i]. Assume that 0≤i<n and n=score.size()=names.size(). Print the name of the candidate with the highest score.

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>score={80,95,72,88,91};
    vector<string>name={"Rahul","Aman","Priya","Karan","Neha"};
    int r=0;
    int l=0;
    int index=0;
    int maxele=score[0];
    for(int i=1;i<score.size();i++){
        if(maxele<score[i]){
            maxele=score[i];
            index=i;
        }
    }
    cout<<name[index];

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>score={80,95,72,88,91};
//     vector<string>name={"Rahul","Aman","Priya","Karan","Neha"};
//     int r=0;
//     int l=0;
//     int index=max_element(score.begin(),score.end())-score.begin();
//     cout<<name[index];

//     return 0;
// }
