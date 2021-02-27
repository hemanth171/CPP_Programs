#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pi pair<int,int>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    int sum = -2147483647;
    int ans = -2147483647;
    for (int i=0;i<n;i++) {
        sum = max(a[i], sum + a[i]);
        // deb(sum);
        if (sum > ans) ans = sum;
    }
    cout << ans;
    return 0;
}