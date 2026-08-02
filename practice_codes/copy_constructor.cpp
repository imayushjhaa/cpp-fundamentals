// Deep copy bnate hain
#include<iostream>
using namespace std;

class Deep{

    public:
    int *numPtr;  // pointer variable for heap memory

    Deep(int num){    // parameterized constructor
        numPtr = new int(num);   // heap me ek naya box banaya aur num ki value daal di!
    }

    Deep(const Deep &org_obj){     // this is copy constructor
        numPtr = new int;   // dusre object ke pointer k liye ek naya box bana rha hu memory me ( heap )
        *numPtr = *(org_obj.numPtr);  // original object ka data isme daal rha hu
    }

    ~Deep(){
        cout<<"\nHey this is destructor, memory cleared successfully"<<endl;
    }
};

int main (){
    Deep obj1(45); // stack memory
    Deep obj2(obj1);  // Deep copy

    cout<<"The value of obj1 num: "<<*obj1.numPtr<<endl;
    cout<<"The value of obj2 num: "<<*obj2.numPtr<<endl;

    *obj1.numPtr = 100;

    cout<<"\nThe value of obj1 num: "<<*obj1.numPtr<<endl;
    cout<<"The value of obj2 num: "<<*obj2.numPtr<<endl;

 
return 0;
}