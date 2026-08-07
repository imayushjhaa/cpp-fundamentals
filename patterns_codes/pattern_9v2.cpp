#include<iostream>
using namespace std;

void print_9 (int x) {

    // outer loop for rows:
    for(int i=0; i<2*x; i++){
        int space;
        int star;

        //for upper triangle
        if(i<x){
            space = x-i-1;
            star = 2*i+1;
        }

        //for lower triangle
        else{
            space = i-x;
            star = 2 * (2*x-1-i)+1;  // 2x-2i+1 = 2(x-i)+1
        }

        //printing spaces
        for(int j=0; j<space; j++){
            cout<<" ";
        }

        //printing stars
        for(int j=0; j<star; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main () {
    int n;
    cout<<"Enter n for pattern: ";
    cin>>n;

    print_9(n);

    return 0;
}

// sometimes we need to do combination of different patterns to generate other patterns