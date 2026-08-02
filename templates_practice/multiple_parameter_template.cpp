// multiple parameterized template
#include<iostream>
using namespace std;

template <typename T1, typename T2>
class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<" and "<<this->data2;
            cout<<"\n";
        }

};

int main (){
    myClass <string,int> obj1("Ayush Jha",20);
    myClass <string,float> obj2("Code",53.02);

    obj1.display();
    obj2.display();
 
    return 0;
}