#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c = 0;
    int n;
    cin >> n;
    for (int k=2;k<10;k++) {
        if ((n % k == 0))
            c++;
    }
    cout << c << "\n";
    return 0;
}