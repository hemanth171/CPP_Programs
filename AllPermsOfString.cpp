#include <bits/stdc++.h>
using namespace std;

vector<string> sol(string s,string prefix,vector<string>& ls){
    if(s.size()==0){
        ls.push_back(prefix);
        return ls;
    }
    for(int i=0;i<s.size();i++){
        string rem = s.substr(0,i) + s.substr(i+1);
        sol(rem,prefix+s[i],ls);
    }
    return ls;
}

vector<string> allPerms(string s){
    vector<string> perms;
    perms = sol(s,"",perms);
    return perms;
}

int main(){
    string s = "ABC";
    vector<string> out = allPerms(s);
    for(string str: out){
        cout << str << endl;
    }
    return 0;
}