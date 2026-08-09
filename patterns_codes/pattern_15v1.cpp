#include<iostream>
using namespace std;

void print_15 (int x) {

    // outer loop for rows:
    for(int i=x; i >= 1; i--){
        char ch = 'A';
        for(int j=i; j>=1; j--){
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

    print_15(n);

    return 0;
}