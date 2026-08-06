#include<iostream>
using namespace std;

void print_8 (int x) {
    for(int i=0; i<x; i++){     // outer loop

        //for printing spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        //for printing stars
        for(int j=0; j<(2 * (x-i) - 1); j++){  // 2x-2i-1 = 2(x-i)-1
            cout<<"*";
        }

        //for printing spaces (waise trailing spaces optional hote hain)
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_8(n);

    return 0;
}