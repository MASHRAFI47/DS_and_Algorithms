#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];

    int totalsum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        totalsum += arr[i];
    }


    int pre[n];
    pre[0] = arr[0];

    for(int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + arr[i];
    }

    int equilibriumIndex = -1;

    for(int i = 0; i < n; i++) {
        int rightSum = totalsum - pre[i];
        if(rightSum == pre[i]) {
            equilibriumIndex = i;
            break;
        }
    }

    cout << equilibriumIndex << endl;
}