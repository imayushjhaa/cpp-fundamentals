#include<iostream>
using namespace std;

void print_13 (int x) {

    // outer loop for rows:
    int temp = 1;
    for(int i=0; i < x; i++){
        for(int j=0; j<=i; j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_13(n);

    return 0;
}