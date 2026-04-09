#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int l = 0;
    int r = n-1;

    int search_val;
    cin >> search_val;

    int found_index = -1;

    while(l <= r) {
        int mid = (l+r) / 2;

        if(arr[mid] == search_val) {
            found_index = mid;
            r = mid - 1; // first occurance
        }
        else if(arr[mid] > search_val) {
            r = mid - 1;
        }
        else {
            l = mid+1;
        }
    }

    cout << found_index << endl;
}