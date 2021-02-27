#include <bits/stdc++.h>

using namespace std;

vector<string> output;
vector<string> getPerms(string str, int l, int r) {
    if(l==r){
        output.push_back(str);
    }
    for(int i=l;i<=r;i++){
        swap(str[l],str[i]);
        getPerms(str,l+1,r);
        swap(str[l],str[i]);
    }
    return output;
}

int main(){
    string input = "ABCD";
    int len = input.length();
    getPerms(input, 0, len-1);
    for(auto x: output){
        cout << x << endl;
    }

    return 0;
}