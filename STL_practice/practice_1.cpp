#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
      
int main (){
    int element;
    vector <int> vec; // empty vector
    
    cout<<"Enter 5 elements here: "<<endl;
    for(int i=0; i<5; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>element;
        vec.push_back(element);
    }

    // printing the vector
    cout<<"\nVector: ";
    for(auto x: vec){
        cout<<x<<" ";
    }

    // sorting vector into descending order
    sort(vec.begin(),vec.end(),greater<int>());
    cout<<"\nDescending order: ";
    for(auto x: vec){
        cout<<x<<" ";
    }
    
    return 0;
}