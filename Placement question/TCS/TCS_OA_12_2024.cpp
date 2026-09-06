/*Write a program that accepts two integers, n and m, and prints all prime numbers between n and m (inclusive) such that the sum of their digits is also a prime number. 

Input Format
The first line contains two integers n and m.

*/


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num < 2)
        return false;

    for(int i = 2; i * i <= num; i++){
        if(num % i == 0)
            return false;
    }

    return true;
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = n; i <= m; i++){

        // Check number is prime
        if(!isPrime(i))
            continue;

        // Find digit sum
        int temp = i;
        int sum = 0;

        while(temp > 0){
            sum += temp % 10;
            temp /= 10;
        }

        // Check digit sum is prime
        if(isPrime(sum)){
            cout << i << " ";
        }
    }

    return 0;
}