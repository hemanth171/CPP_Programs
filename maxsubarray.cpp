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

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int arr[] = {-1, 2, -4, -3, 5, 4, -5, 2};
    int sum = 0, best = 0;
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<arrsize;++i) {
        sum = max(arr[i], sum+arr[i]);
        best = max(sum, best);
    }
    cout << best << "\n";
    return 0;
}
