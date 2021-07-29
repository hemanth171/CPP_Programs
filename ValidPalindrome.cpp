#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    string in="";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(auto c: s){
        int a = c - 'a';
        if((a >= 0 && a <=25) || (a <= -40 && a >= -49)){
            in += c;
        }
    }
    int i=0;
    int j=in.size()-1;
    while(i<j){
        if(in[i] != in[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main(){
    string s = "race a car";
    cout << isPalindrome(s);
    return 0;
}