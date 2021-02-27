#include <bits/stdc++.h>

using namespace std;

int main() {
    // vector<int> v = {1,2,3,1};
    vector< vector<int> > vv;
    vector<int> t;
    t.push_back(10);
    t.push_back(40);
    t.push_back(50);
    t.push_back(60);

    vector<int> t1;
    t1.push_back(10);
    t1.push_back(40);
    t1.push_back(50);
    t1.push_back(60);
    
    int i=0;
    vv.push_back(t);
    vv.push_back(t1);

    for (int j=0;j<vv.size();j++) {
        for (auto a: vv[i]) {
            cout << a << "\n";
        }
    }

    return 0;
}