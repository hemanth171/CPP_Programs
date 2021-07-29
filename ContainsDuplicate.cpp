#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(1);
    
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
    }
    if (nums.size()==s.size()){
        cout << "False";
    } else {
        cout << "True";
    }

    return 0;
}