#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    string s = "hemanth";
    for (int i=0;i<s.size();i++) {
        v.push_back(s[i]-'a');
    }
    for (int i=0;i<v.size();++i) {
        cout << v[i] << "\n";
    }
    return 0;
}
