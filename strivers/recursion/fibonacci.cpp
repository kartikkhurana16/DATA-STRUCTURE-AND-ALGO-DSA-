/*
#include <bits/stdc++.h>
using namespace std;

int start() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input";
        return -1;
    }

    int arr[n];
    arr[0] = 0;

    if (n == 1) {
        cout << arr[0];
        return 1; 
    }

    arr[1] = 1;
    cout << arr[0] << " " << arr[1] << " ";

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i] << " ";
    }

}

int main() {
    start();
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int start(int n)
{
    if(n<=1) return n;
    int last=start(n-1);
    int slast=start(n-2);
    return last+slast;
}
int main()
{
    int n;
    cin>>n;
    cout<<start(n);
    return 0;
}