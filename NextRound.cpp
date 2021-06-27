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
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t,k,a,kpos;
    int out=0;
    cin >> t >> k;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin >> a;
        v[i] = a;
        if(i == k-1){
            kpos=a;
        }
    }
    for(int i=0;i<t;i++){
        if(v[i]!=0){
            if(v[i]>=kpos){
                out++;
            } else {
                break;
            }
        }
    }
    cout << out << "\n";
    
    return 0;
}
