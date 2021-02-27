#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve();

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}

ll solve() {
    ll in;
    cin >> in;
    return (ll) 1 + in * (in + 1)  / 2;
}