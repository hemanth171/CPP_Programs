#include <bits/stdc++.h>
using namespace std;

// #define SWAP(x, y) { int temp = x; x = y; y = temp; }

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int l, int r, int p) {
    int pivot = arr[p];
    swap(&arr[p], &arr[r]);
    p = l;
    for(int i=l;i<r;i++){
        if(arr[i]<=pivot){
            swap(&arr[i], &arr[p]);
            p++;
        }
    }
    swap(&arr[p], &arr[r]);
    return p;
}
// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
    // sort(arr,arr+(r+1));
    // return arr[k-1];
    cout << "l:" << l << endl;
    cout << "r:" << r << endl;
    if(l==r){
        return arr[l];
    }
    int p = l + rand() % (r - l + 1);
    p = partition(arr, l, r, p);
    cout << "p: " << p << endl;
    cout << "k: " << k << endl;
    if((k-1) == p){
        return arr[k-1];
    }
    else if((k-1) < p) {
        return kthSmallest(arr, l, p-1, k);
    }
    else {
        return kthSmallest(arr, p+1, r, k);
    }
}

int main(){
    // int A[] = { 7, 4, 6, 3, 9, 1 }; // 1,3,4,6,7,9
    int A[] = {7, 10, 4, 20, 15};
    int k = 4;
    int N = sizeof(A)/sizeof(A[0]);
 
    printf("k'th smallest element is %d", kthSmallest(A, 0, N - 1, k));
    return 0;
}