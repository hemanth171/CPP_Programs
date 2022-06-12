#include <bits/stdc++.h>

using namespace std;

int minSub(int arr[], int n, int k) {
    int min_upto[n];
    stack<int> stk;
    stk.push(0);
    for (int i=1;i<n;i++) {
        while (!stk.empty() && arr[stk.top()] > arr[i]) {
            min_upto[stk.top()] = i - 1;
            stk.pop();
        }
        stk.push(i);
    }
    while (!stk.empty()) {
        min_upto[stk.top()] = n - 1;
        stk.pop();
    }
    // for (int i=0;i<n;i++) {
    //     cout << min_upto[i] << " ";
    // }
    // cout << endl;
    int j = 0, minmax = 0;
    for (int i=0;i<=n-k;i++) {
        minmax = 0;
        while (j<i || min_upto[j] < i+k-1) {
            j++;
        }
        // minmax = max(minmax, arr[j]);
        cout << arr[j] << endl;
    }
    return minmax;
}

int main() {
    int a[] = {10,20,30,50,10,70,30};
    int n = sizeof(a) / sizeof(int);
    int k = 3;
    minSub(a, n, k);
    return 0;
}