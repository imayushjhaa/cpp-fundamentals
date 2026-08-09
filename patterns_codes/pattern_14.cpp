#include<iostream>
using namespace std;

void print_14 (int x) {

    // outer loop for rows:
    for(int i=0; i < x; i++){
        char ch = 'A';
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_14(n);

    return 0;
}