#include <bits/stdc++.h>

using namespace std;

int main() {
    multiset<int> m;
    // m.insert(10);
    // m.insert(10);
    // m.insert(20);
    // m.insert(80);
    // m.insert(60);
    // m.insert(30);
    // m.insert(40);

    // int n = m.size();

    vector<int> v = {1,2,3,1};
    int n = v.size();

    for (int i=0;i<n;i++) {
        // cout << *m.end() << " " << *m.begin() << "\n";
        multiset<int> :: iterator itr = m.lower_bound(v[i]);
        m.insert(v[i]);
        cout << *itr << "\n";
    } 

    // for (int i=0;i<n;i++) {
    //     multiset<int> :: iterator it = next(m.begin(), i);
    //     multiset<int> :: iterator itr = m.upper_bound(*it);
    //     cout << *itr << "\n";
    // }
    // for (auto a = m.begin();a != m.end(); a++) {
    //     cout << *a << "\n";
    // }

    return 0;
}