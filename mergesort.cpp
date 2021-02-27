#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pi pair<int,int>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i=0;i<n1;++i) {
        L[i] = arr[l+i];
    }
    for (int i=0;i<n2;++i) {
        R[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0, k = l;
    while ((i<n1) && (j<n2)) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    auto start = chrono::high_resolution_clock::now();
    int arr[] = {38, 27, 43, 3, 9, 82, 10, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, size-1);

    for (int i=0;i<size;++i) {
        cout << arr[i] << " ";
    }
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds> (stop-start);
    cout << "\n" << duration.count();
    
    return 0;
}
