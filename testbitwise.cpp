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
#define deb3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << endl

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    vector<bool> v{ 1,1,1 };
    int cur=0;
    for(int i=0;i<v.size();i++) {
        cur = (cur << 1) | v[i];
        cout << cur << endl;
    }
    // int a = 4, b = 5;
    // cout << (a | b) << endl;
    // int l = (1 << 4) | 1;
    // cout << l << endl;
    // int n = 24;
    // n = n >> 2;
    // printf("%d",n);
    
    return 0;
}
