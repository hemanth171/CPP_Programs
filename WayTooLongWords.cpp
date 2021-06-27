#include <bits/stdc++.h>
using namespace std;

void solution(){
    string word;
    cin >> word;
    int len = word.size();
    if(len > 10){
        cout << word[0] << len-2 << word[len-1] << "\n";
    } else {
        cout << word << "\n";
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solution();
    }

    return 0;
}