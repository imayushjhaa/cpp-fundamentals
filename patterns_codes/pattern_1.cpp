#include<iostream>
using namespace std;

void print_1 (int x) {
    for (int i=0; i<x; i++){
        for (int j=0; j<x; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_1(n);

    return 0;
}