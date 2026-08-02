#include<iostream>
#include<string>
using namespace std;

class Trekker{
    public:

    string *name;
    int *altitude;

    Trekker(string n,int alt){
        name = new string(n);   // new heap memory create kr rha hu aur usme 'n' daal rha hu
        altitude = new int(alt);  // similarly 
    }
    
    Trekker(const Trekker &org){
        name = new string;  // heap memory banaya dusre object ke pointer ke liye
        *name = *(org.name);   // deep copy ho rhi hai
        altitude = new int;  // heap memory banaya
        *altitude = *(org.altitude); // deep copy ho rhi hai
    }

    ~Trekker(){
        delete name;
        delete altitude;
        cout<<"\nMemory clear successfully"<<endl;
    }
};
int main (){
    Trekker t1("Spidey",4000);
    Trekker t2(t1);   // Deep copy

    cout<<"Name: "<<*(t1.name)<<endl;
    cout<<"Altitude: "<<*(t1.altitude)<<endl;
    cout<<endl;
    cout<<"Name: "<<*(t2.name)<<endl;
    cout<<"Altitude: "<<*(t2.altitude)<<endl;

    //changing altitude for object 1
    *(t1.altitude)=5000;

    cout<<"\nName: "<<*(t1.name)<<endl;
    cout<<"Altitude: "<<*(t1.altitude)<<endl;
    cout<<endl;
    cout<<"Name: "<<*(t2.name)<<endl;
    cout<<"Altitude: "<<*(t2.altitude)<<endl;

 
return 0;
}