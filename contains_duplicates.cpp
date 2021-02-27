#include <bits/stdc++.h>
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define deb3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << endl

using namespace std;

const int nax = 2*10000;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    multiset<int> s;
    int n = nums.size();
    for (int i=0;i<n;i++) {
        multiset<int> :: iterator it = s.lower_bound(nums[i]);
        // deb(*it);
        // deb2(*s.end(), *s.begin());
        if (it != s.end() && abs(long(*it) - long(nums[i])) <= t) {
            return true;
        } else {
            if (it != s.begin()) {
                it = next(it, -1);
                if (abs(long(*it) - long(nums[i])) <= t) {
                    // deb3(*it, nums[i], t);
                    return true;
                }
            }
            s.insert(nums[i]);
        }
        if (i >= k) {
            s.erase(nums[i-k]);
        }
    }
    return false;

    // multiset <int> s;
    // int n = nums.size();
    // for(int i = 0; i< n; i++){
    //     multiset <int> :: iterator x = s.lower_bound(nums[i]);
    //     if(x != s.end() && *x <= nums[i] + t ) return true;
    //         if(x != s.begin()){
    //            x = std::next(x, -1);
    //            if(*x + t >= nums[i])return true;
    //         }
    //         s.insert(nums[i]);
    //         if(i >= k){
    //            s.erase(nums[i - k]);
    //         }
    // }
    // return false;
}

// [-2147483648,2147483647]
// 1
// 1

int main() {
    vector<int> A;
    A.push_back(-2147483648);
    A.push_back(2147483647);
    // A.push_back(9);
    // A.push_back(1);
    // A.push_back(5);
    // A.push_back(9);
    // A.push_back(9);
    // A.push_back(15);

    cout << containsNearbyAlmostDuplicate(A, 1, 1);

    return 0;
}

// class Solution {
// public:
//     static bool pcomp(pair<int,int> a, pair<int,int> b) {
//         return a.first < b.first ;
//     }
    
//     bool search(vector<pair<int,int> > l, int t, int k){
//         int po = 0;
//         while (po < l.size()){
//             int i = po + 1;
//             while (i < l.size()){
//                 if ((abs(long(l[i].first) - long(l[po].first)) <= t)&&(abs(l[i].second - l[po].second)<= k)){
//                     return true;
//                 }else{
//                     if (abs(long(l[i].first) - long(l[po].first)) > t){
//                         break;
//                     }else{
//                         i+=1;
//                     }
//                 }
//             }
//             po += 1;
//         }
//         return false;
//     }
    
//     bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
//         if (nums.size() == 0 ){
//             return false;
//         }
//         vector<pair<int,int> > pp;
//         for (int i=0;i<nums.size();i++){
//             pp.push_back(make_pair(nums[i], i));
//         }
//         sort(pp.begin(),pp.end(),pcomp);
//         return search(pp, t, k);
//     }
// };

// class Solution {
// public:
//     bool containsNearbyAlmostDuplicate(vector<int>& v, int k, int t) {
//         t = (long long )(t);
//         k = (long long )(k);
//        long long  n = v.size();
//         k=min(1ll*n,1ll*k);
//         vector<long long int >ar(n),br(n);
//         for(int i =0 ;i <n;i++){
//             ar[i] =1ll*v[i];
//         }
//         vector<pair<long long ,int > > vv;
//         for(int i =0 ;i <n;i++){
//             vv.emplace_back(ar[i],i);
//         }
//         sort(vv.begin(),vv.end());
//         for(int i = 0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(abs(vv[i].second-vv[j].second)<=k){
//                     // cout << vv[i].first <<" "<< vv[j].first << endl;
//                     if(abs(vv[i].first-vv[j].first)<=t)return 1;
//                     else
//                         break;
//                 }
//             }
//         }
//         return 0;      
    
//     }
// };

// class Solution {
// public:
//     bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
//         int n = nums.size();
//         if (n == 0) return false;
//         if(k == 10000) return false;
//         int i, j, m;
//         for (i = 0; i < n; ++i) {
//             m = min(i+k+1, n);
//             for (j = i+1; j < m; ++j) {
//                 if (abs((long)nums[i] - nums[j]) <= t)
//                     return true;
//             }
//         }
//         return false;
//     }
// };