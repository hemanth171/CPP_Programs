#include <iostream>
#include <deque> 
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
using namespace std;

void printKMax(int arr[], int n, int k){
    int i;
    deque<int> Q(k);
	for (i=0;i<k;++i) {
        while ((!Q.empty()) && arr[i] >= arr[Q.back()])
            Q.pop_back();
        
        Q.push_back(i);
    }
    for (;i<n;++i) {
        cout << arr[Q.front()] << " ";
        while ((!Q.empty()) && Q.front() <= i-k)
            Q.pop_front();

        while ((!Q.empty()) && arr[i] >= arr[Q.back()])
            Q.pop_back();

        Q.push_back(i);
    }
    cout << arr[Q.front()] << "\n";
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}