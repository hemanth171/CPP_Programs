#include <bits/stdc++.h>
using namespace std;

int sol(string s){
    int out = -1;
    map<char,int> mp;
    vector<int> v(s.size());
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i]) != mp.end()){
            mp[s[i]]++;
        } else {
            mp[s[i]]=1;
        }
    }
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==1){
            return i;
        }
    }
    return out;
}

int main(){
    string s = "aabb";
    cout << sol(s);
    return 0;
}