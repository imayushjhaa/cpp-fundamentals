#include<iostream>
using namespace std;

void swapp(int *a, int *b){   // creating pointer to store address
    int temp = *a;
    *a = *b;
    *b = temp;  // swapping with the help of third variable 
}      
int main (){
    int x = 37, y = 47;
    cout<<"x: "<<x<<" and y: "<<y<<endl;
    cout<<"\n";
    swapp(&x, &y);   // passing address of variables
    cout<<"x: "<<x<<" and y: "<<y<<endl;
    return 0;
}