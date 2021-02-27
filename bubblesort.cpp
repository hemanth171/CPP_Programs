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
    // int arr[] = {1, 3, 8, 2, 9, 2, 5, 6};
    int arr[] = {38, 27, 43, 3, 9, 82, 10, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;++i) {
        for (int j=i+1;j<size;++j) {
            if (arr[i] < arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for (int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds> (stop-start);
    cout << "\n" << duration.count();
    
    return 0;
}
