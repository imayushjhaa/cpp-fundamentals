#include<iostream>
using namespace std;

void print_10 (int x) {

    // outer loop for rows:
    for(int i=0; i < 2*x-1; i++){

        // for upper triangle:
        if(i<x){
            for(int j=0; j<i+1; j++) cout<<"* ";
        }

        else{
            for(int j=0; j < (2 * x - (i+1)); j++) cout<<"* ";
        }
        cout<<endl;
        
    }
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_10(n);

    return 0;
}
