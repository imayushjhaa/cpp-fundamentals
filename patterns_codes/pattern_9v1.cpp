#include<iostream>
using namespace std;

void print_9 (int x) {

    //from pattern_7.cpp
    for(int i=0; i<x; i++){     // outer loop

        //for printing spaces
        for(int j=0; j<x-i-1; j++){
            cout<<" ";
        }

        //for printing stars
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }

        //for printing spaces
        for(int j=0; j<x-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    //from pattern_8.cpp
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

    print_9(n);

    return 0;
}

// sometimes we need to do combination of different patterns to generate other patterns