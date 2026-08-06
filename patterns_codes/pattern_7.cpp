#include<iostream>
using namespace std;

void print_7 (int x) {
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
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_7(n);

    return 0;
}