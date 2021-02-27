#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int tt,N,K,input;
    cin >> tt;
    while(tt--){
        cin >> N;
        cin >> K;
        deque<int> queue;
        for(int i=0;i<N;i++) {
            cin >> input;
            queue.push_back(input);
        }
        for(int j=0;j<K;j++){
            int last=queue.back();
            queue.pop_back();
            queue.push_front(last);
        }
        for(auto x:queue){
            cout << x << " ";
        }
        cout << endl;
    }
	return 0;
}