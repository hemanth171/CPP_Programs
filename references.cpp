#include <bits/stdc++.h>
using namespace std;

int & f(int & i) {
    return ++i;
}

int main() {
    int i = 7;
    cout << i << endl;
    cout << f(i) << endl;
    cout << i << endl;
    return 0;
}