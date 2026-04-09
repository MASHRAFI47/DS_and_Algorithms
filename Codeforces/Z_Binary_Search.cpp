//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    while(q--) {
        int val;
        cin >> val;

        int l = 0;
        int r = n-1;
        
        bool found = false;

        while(l<=r) {
            int mid = (l+r)/2;

            if(arr[mid] == val) {
                found = true;
                break;
            }
            else if(arr[mid] < val) {
                l = mid+1;
            }
            else if(arr[mid] > val) {
                r = mid-1;
            }
        }

        if(found) {
            cout << "found" << endl;
        }
        else {
            cout << "not found" << endl;
        }
    }
}