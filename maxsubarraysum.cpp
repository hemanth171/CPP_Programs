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
    
    vector<int> v = {5,1,-2,1};
    // vector<int> v = {-1,2,4,-3,5,2,-5,2};
    int sum=v[0],best=v[0];
    for(int i=1;i<v.size();i++) {
        sum = max(v[i],sum+v[i]);
        best = max(best,sum);
    }
    cout << best << endl;
    
    return 0;
}
