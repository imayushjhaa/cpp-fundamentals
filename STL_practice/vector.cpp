#include<iostream>
#include<vector>
#include<list>

using namespace std;

void display (vector<int> &v){
    cout<<"Your vector: ";
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
      
int main (){
    vector<int> vec = {1,2,3,4,5};
    list<int> lst = {1,2,3,4,5};
    
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    lst.pop_front();
    

    display (vec);
    return 0;
}
