#include <bits/stdc++.h>

using namespace std;

int main() {
    deque<int> q;
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    // q.push_back(4);

    deque<int> :: iterator it;
    // *it = 2;
    // q.erase(it); 
    for (auto i=q.begin();i != q.end();++i) {
        cout << *i << "\n";
    }
    return 0;
}