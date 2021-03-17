#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    int ops=0;
    while(N > 0){
        if(N==1){
            break;
        }
        if(N%2==0){
            N /= 2;
            ops++;
        } else {
            N -= 1;
            ops++;
        }
    }
    cout << "Min operations: " << ops << endl;

    return 0;
}