#include<iostream>
using namespace std;

void print_6 (int x) {
    for (int i=0; i<x; i++){
        for (int j=1; j<x-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_6(n);

    return 0;
}