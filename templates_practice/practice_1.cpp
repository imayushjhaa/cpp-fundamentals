#include<iostream>
using namespace std;

template <typename T>
class arrayOperation {
    T *arr;  // pointer for memory location of dynamic array
    int size; // array ka size toh integer hi hoga na

    public:
        arrayOperation (int size){
            this->size = size;
            cout<<"Array size: "<<size<<endl;
            // setting heap memory
            arr = new T[size];
        }
        ~arrayOperation(){
            delete [] arr;
            cout<<"Memory cleared successfully"<<endl;
        }
        void inputElement(){
            for(int i=0; i<size; i++){
                cout<<"Enter element number "<<i+1<<": ";
                cin>>arr[i];
            }
        }
        T maxElement(){
            T max = arr[0];  // assuming the first element to be maximum
            for(int i=1; i<size; i++){
                if(arr[i] > max ){
                    max = arr[i];
                }
            }
            return max;
        }

};

int main (){
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    cout<<"\n----T = int ----"<<endl;
    arrayOperation <int> myInt(size);
    myInt.inputElement();
    cout<<"The max element is: "<<myInt.maxElement()<<endl;

    cout<<"\n----T = float ----"<<endl;
    arrayOperation <float> myFloat(size);
    myFloat.inputElement();
    myFloat.maxElement();
    cout<<"The max element is: "<<myFloat.maxElement()<<endl;
 
    return 0;
}