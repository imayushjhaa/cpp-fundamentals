#include<iostream>
using namespace std;

void print_9 (int x) {

    // outer loop for rows:
    for(int i=0; i<2*x; i++){

        // using ternary operator
        int space = (i<x) ? (x-i-1) : (i-x);
        int star = (i<x) ? (2*i+1) : (2*(2*x-1-i)+1);

        // printing spaces
        for(int j=0; j<space; j++) cout<<" ";

        // printing stars
        for(int j=0; j<star; j++) cout<<"*";

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