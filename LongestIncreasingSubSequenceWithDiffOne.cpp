#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int dp[N];
    map<int,int> m;
    int mx=0;
    for(int i=0;i<N;i++){
        if(m.find(arr[i]-1) != m.end()){
            int lastindex = m[arr[i]-1] - 1;
            dp[i] = dp[lastindex] + 1;
        } else {
            dp[i] = 1;
        }
        m[arr[i]] = i + 1;
        mx = max(mx, dp[i]);
    }
    cout << "Max: " << mx << endl;

    return 0;
}