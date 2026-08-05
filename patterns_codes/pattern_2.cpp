#include<iostream>
using namespace std;

void print_2 (int x) {
    for (int i=0; i<x; i++){
        for (int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_2(n);

    return 0;
}