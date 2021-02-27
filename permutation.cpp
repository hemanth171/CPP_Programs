#include <bits/stdc++.h>

using namespace std;

int max_time = -1;

void printArr(vector<int>& A) {
    for (int i=0;i<A.size();i++) {
        cout << A[i] << " ";
    }
    cout << "\n";
}

void swap(vector<int>& A, int i, int j) {
    if (i != j) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}

void build_time(vector<int>& A) {
    int hour = A[0] * 10 + A[1];
    int minute = A[2] * 10 + A[3];
    if (hour < 24 && minute < 60) {
        int time = hour * 60 + minute;
        if (max_time < time) {
            max_time = time;
        }
    }
}

void permutate(vector<int>& A, int start) {
    if (start == A.size()) {
        build_time(A);
        return;
    }
    for (int i=start;i<A.size();++i) {
        swap(A, i, start);
        permutate(A, start + 1);
        swap(A, i, start);
        // printArr(A);
    }
}

string solve(vector<int>& A) {
    permutate(A, 0);
    if (max_time == -1) {
        return "";
    } else {
        ostringstream stringstream;
        stringstream << setw(2) << setfill('0') << max_time / 60 << ":" << setw(2) << setfill('0') << max_time % 60;
        return stringstream.str();
    }
}

int main() {
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    cout << solve(A);

    return 0;
}