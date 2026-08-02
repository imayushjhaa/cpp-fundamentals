// creating a template for swapping quantities using reference variable
#include<iostream>
#include<string>
using namespace std;

template<typename T1>
void costumSwap(T1 &a, T1 &b){   // int, float, double, string
    T1 temp;
    temp = a;
    a = b;
    b = temp;
}

int main (){
    int x, y;    // change the data type here
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;

    cout<<"\nValue of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;

    costumSwap(x,y);

    cout<<"\nSwapping of x and y done successfully"<<endl;

    cout<<"\nValue of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;
    
    return 0;
}