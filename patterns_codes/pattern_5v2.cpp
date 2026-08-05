#include<iostream>
using namespace std;

void print_5 (int x) {
    for (int i=x; i>0; i--){    // reversing the outer array
        for (int j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_5(n);

    return 0;
}