// This is default parameter template
#include<iostream>
using namespace std;

template <typename T1 = string, typename T2 = int>
class Ayush {
    public:
        T1 a;
        T2 b;

        Ayush (T1 x, T2 y){
            a = x;
            b = y;
        }

        void display(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }
};

int main (){
    Ayush <> spidey1("Ayush Jha",20);    // yaha pr <> empty karega, aur default parameter kaam karenge
    spidey1.display();

    //now trying to run template with custom data types
    cout<<endl;
    Ayush <double,char> spidey2(36.00,'S');
    spidey2.display();

    return 0;
}