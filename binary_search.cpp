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
    
    auto start = chrono::high_resolution_clock::now();
    int arr[] = {3, 6, 9, 10, 27, 38, 43, 82};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 82;
    // for (int i=0;i<size;++i) {
    //     if (arr[i] == k) {
    //         cout << arr[i] << "\n";
    //         break;
    //     }
    // }
    int a=0, b=size;
    while (a < b) {
        int m = (a + b) / 2;
        if (arr[m] == k) {
            cout << arr[m] << "\n";
            break;
        } else if (arr[m] < k) {
            a = m+1;
        } else {
            b = m-1;
        }
    }
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds> (stop-start);
    cout << duration.count();
    
    return 0;
}
