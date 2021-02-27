#include <bits/stdc++.h>

using namespace std;

string solve(vector<int>& A) {
    sort(A.begin(), A.end());

    int max_time = -1;
    do {
        int hour = A[0] * 10 + A[1];
        int minute = A[2] * 10 + A[3];

        if (hour < 24 && minute < 60) {
            int new_time = hour * 60 + minute;
            if (new_time > max_time) {
                max_time = new_time;
            }
        }
    } while (next_permutation(A.begin(), A.end()));

    if (max_time == -1) {
        return "";
    } else {
        ostringstream stringstream;
        stringstream << setw(2) << setfill('0') << max_time / 60 << ":" << setw(2) << setfill('0') << max_time % 60;
        return stringstream.str();
    }
}

int main () {
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    cout << solve(A);
    return 0;
}