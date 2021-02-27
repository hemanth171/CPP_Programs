#include <bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    int n;
    Workshop *workshop;
    Available_Workshops(int t)
    {
        n = t;
        workshop = (Workshop*)malloc(t*sizeof(Workshop));
    }
};
//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops* initialize (int start_time[], int duration[], int n) {
    Available_Workshops* aw = new Available_Workshops(n);
    
    for (int i=0;i<aw->n;i++) {
        aw->workshop[i].start_time = start_time[i];
        aw->workshop[i].duration = duration[i];
        aw->workshop[i].end_time = start_time[i] + duration[i];
    }
    return aw;
}

bool comparews(Workshop a, Workshop b) {
    return (a.end_time < b.end_time);
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {

    sort(ptr->workshop, ptr->workshop+ptr->n, comparews);

    int count = 1; int prev = -1;
    for (int i=0;i<ptr->n;i++) {
        if (i==0) {
            prev = ptr->workshop[i].end_time;
            continue;
        }
        if (ptr->workshop[i].start_time >= prev) {
            count++;
            prev = ptr->workshop[i].end_time;
        }
    }

    return count;
}

int main() {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}