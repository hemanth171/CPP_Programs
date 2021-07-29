#include <bits/stdc++.h>
using namespace std;

int sol(int num){
    int out = 0;
    long tmp = 0;
    bool flag = 0;
    string in = to_string(num);
    if(in[0]=='-'){
        in.erase(0,1);
        flag = 1;
    }
    reverse(in.begin(),in.end());
    // cout << in << endl;
    if(in[0] == '0'){
        in.erase(0,1);
    }
    if(flag){
        in = "-" + in;
    }
    tmp = stol(in);
    // cout << tmp << endl;
    if(tmp > INT_MAX || tmp < INT_MIN){
        return 0;
    }
    out = (int)tmp;
    return out;
}

int main(){
    int input = -123456780;
    cout << sol(input);

    return 0;
}