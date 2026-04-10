/*
You will be given an array A of size N.
Print "YES" if there is any duplicate value in the array. "NO" otherwise. 
Input format: First line will contain N 
Second line will contain the array A

Constrains: 
1. 1 <= N <= 100000 
2. 0 <= A[i] <= 10^9; Where 0 <= i < N 

Output format: Output "YES" or "NO" without the quotation marks according to the problem statement. 

Sample input: 
5
1 2 3 4 5 

Sample Output: 
NO 

Sample input: 
6
2 1 3 5 2 1 

Sample Output: 
YES  
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;

    bool hasDuplicate = false;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int amount = count(v.begin(), v.end(), x);

        if(amount > 0) {
            hasDuplicate = true;
        }

        v.push_back(x);
    }

    if(hasDuplicate) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}