#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, Q, k, Y;
    vector<int> v;
    cin >> N;
    for (int i=0;i<N;i++) {
        cin >> k;
        v.push_back(k);
    }
    cin >> Q;
    for (int i=0;i<Q;i++) {
        cin >> Y;
        vector<int>::iterator it = lower_bound(v.begin(), v.end(), Y);
        if (v[it - v.begin()] == Y) {
            cout << "Yes" << " " << (it-v.begin())+1 << "\n";
        } else {
            cout << "No" << " " << (it-v.begin())+1 << "\n";
        }
    }
    return 0;
}
