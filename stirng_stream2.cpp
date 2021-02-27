#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<string> parseStrs(string str) {
    vector<string> v;
	stringstream ss;
    ss.str(str);
    string s;
    while (getline(ss, s, ' ')) {
        // ss >> s;
        v.push_back(s);
    }
    return v;
}

int main() {
    string str = "<tag1 value = \"HelloWorld\">";
    // cin >> str;
    vector<string> strs = parseStrs(str);
    for(int i = 0; i < strs.size(); i++) {
        cout << strs[i] << "\n";
    }
    
    return 0;
}