#include<iostream>
#include<vector>   // for vector
#include<utility>  // for pairs
using namespace std;

class ContainerUtils {
    public:

        // member function for finding the frequency of an element
        template <typename container, typename element>
        static void findFrequency (const container &v, const element &ele) {
            int count = 0;
            for ( auto itr = v.begin(); itr != v.end(); itr++) {
                if ( *itr == ele ){
                    count++;
                }
            }
            cout<<"The count is: "<<count<<endl;

        }

        // member function for finding the maximum element
        template <typename container>
        static void getMax (const container &v){
            auto max = *(v.begin());
            for ( auto itr = v.begin(); itr != v.end(); itr++) {
                if ( max < *itr ){
                    max = *itr;
                }
            }
            cout<<"The maximum element is: "<<max<<endl;
    
        }

        // member function for finding the minimum element
        template <typename container>
        static void getMin (const container &v) {
            auto min = *(v.begin());
            for ( auto itr = v.begin(); itr != v.end(); itr++) {
                if ( min > *itr ){
                    min = *itr;
                }
            }
            cout<<"The minimum element is: "<<min<<endl;
        }
};
      
int main (){
    vector <int> vec = {12,36,50,43,12,9,12,43,9,43};  // 12,43,9  these are more than one
    
    ContainerUtils :: findFrequency(vec,9);  //*
    ContainerUtils :: getMax(vec);
    ContainerUtils :: getMin(vec);


    return 0;
}