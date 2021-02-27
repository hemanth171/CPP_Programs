#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q, k;
    cin >> n >> q;
    vector<int> a[n];
    for (int i=0;i<n;i++) {
        cin >> k;
        for (int j=0;j<k;j++) {
            int r;
            cin >> r;
            a[i].push_back(r);
        }
        
    }
    for (int i=0;i<q;i++) {
        int p, q;
        cin >> p >> q;
        cout << a[p].at(q) << "\n";
    }
    return 0;
}