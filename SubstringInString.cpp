#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string st) {
    // cout << st << endl;
    int i = 0;
    int j = st.size()-1;
    while (i<j) {
        if (st[i] != st[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {
    string s = "etcyabebawrc";
    for (int i=0;i<s.size();i++) {
        for (int j=i+1;j<s.size();j++) {
            // cout << "i: " << i << " " << "j: " << j << endl;
            // cout << s[i] << " " << s[j] << endl;
            if (s[i] == s[j]) {
                // cout << s[i] << " " << s[j] << endl;
                // cout << "i: " << i << " " << "j: " << j << endl;
                string ss = s.substr(i,j-i+1);
                // cout << ss << endl;
                if (isPalindrome(ss)) {
                    cout << ss << endl;
                }
            }
        }
    }
    return 0;
}