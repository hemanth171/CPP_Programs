#include <bits/stdc++.h>

using namespace std;

int cnt=0;
int countTriples(int steps) {
    // if(steps<0){
    //     return;
    // }
    // if(steps==0){
    //     cnt++;
    //     return;
    // }
    // countTriples(steps-3);
    // countTriples(steps-2);
    // countTriples(steps-1);
    if(steps<0){
        return 0;
    }
    else if(steps==0){
        return 1;
    }
    else {
        return countTriples(steps-1) + countTriples(steps-2) + countTriples(steps-3);
    }
}

int countTriples(int steps, int box[]) {
    if(steps<0){
        return 0;
    }
    else if(steps==0){
        return 1;
    }
    else if(box[steps]>-1){
        return box[steps];
    }
    else {
        box[steps]=countTriples(steps-1,box) + countTriples(steps-2,box) + countTriples(steps-3,box);
    }
    return box[steps];
}

int main(){
    int steps=7;
    int box[steps+1];
    fill(box, box+steps+1, -1);
    cout << countTriples(steps, box);
    // cout << cnt;

    return 0;
}