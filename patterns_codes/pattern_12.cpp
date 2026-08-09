#include<iostream>
using namespace std;

void print_12 (int x) {

    // outer loop for rows:
    for(int i=0; i < x; i++){

        //print number:
        for(int j=0; j<=i; j++){
            cout<<j+1;
        }

        //printing spaces:
        for(int j=0; j < (2*x - 2*i - 2); j++){
            cout<<" ";
        }

        //printing number:
        for(int j=i+1; j>=1; j--){
            cout<<j;
        }

    cout<<endl;
    }

}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_12(n);

    return 0;
}

