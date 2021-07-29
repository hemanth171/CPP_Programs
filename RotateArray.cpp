#include <bits/stdc++.h>
using namespace std;

int main(){
    int k=3;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    k = k%nums.size();

    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    for(auto it=nums.begin();it!=nums.end();it++){
        cout << *it << endl;
    }

    return 0;
}