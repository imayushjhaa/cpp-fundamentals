#include<iostream>
using namespace std;

void print_11 (int x) {

    // outer loop for rows:
    for(int i=0; i<x; i++){
        int str;  

        if(i % 2 == 0){
            str = 1;     // even value of i = starting from 1
        }
        else {
            str = 0;     // odd value of i = starting from 0
        }
        
        for(int j=0; j<=i; j++){
            cout<<str<<" ";
            str = 1 - str;    // swapping 
        }
        cout<<endl;
    }
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_11(n);

    return 0;
}
