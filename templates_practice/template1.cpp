// implimenting my very first template:
#include<iostream>
using namespace std;

// creating a template for my following upcoming class vector
template <typename T>
class Vector{
    public:
        T *arr;   // for heap memory
        int size;

        Vector(int num){    
            size = num;
            arr = new T [size];  // creating memory for array of space = size
        }

        T dotProd(Vector &v){
            T d = 0;     // initiating d from 0
            for(int i = 0; i<size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }

        ~Vector(){        // This is destructor 
            delete[] arr;
            cout<<"\nMemory cleared successfully"<<endl;
            cout<<"\n";
        }

};
int main (){
    Vector <float> v1(3);   // 1st object created here
    v1.arr[0]= 3.2;
    v1.arr[1]= 0.90;
    v1.arr[2]= 2.87;

    Vector <float> v2(3);    // 2nd object created here
    v2.arr[0]= 2.21;
    v2.arr[1]= 0.0;
    v2.arr[2]= 6.81;

    float storeValue = v1.dotProd(v2);

    cout<<"Dot Product: "<<storeValue<<endl;

    return 0;
}