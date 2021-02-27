#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // std::cout << "Hello World!!" << std::endl;
    for (int i=0;i<5;i++) {
        cout << "Hello World!!" << endl;
    }

    const char * var = "Hemanth";
    cout << var[0] << endl;

    puts("Hello Hello..");

    int x = 7;
    int *ip = &x;
    cout << "The value of x is " << x << endl;
    cout << "The value of *ip is " << *ip << endl;

    int arr[5];
    int *ptr_arr = arr;
    for(int i=0;i<5;i++) {
        *ptr_arr = 2;
        ++ptr_arr;
    }
    // for (int i=0;i<5;i++) {
    //     cout << arr[i] << endl;
    // }

    char s[] = "Lidiya";
    // for (int i=0;s[i]!=0;i++) {
    //     cout << s[i] << endl;
    // }
    for (char * c=s;*c;c++) {
        cout << *c << endl;
    }
    cout << s << endl;
    return 0;
}