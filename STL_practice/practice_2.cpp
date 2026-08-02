#include<iostream>
#include<string>
#include<map>
using namespace std;
      
int main (){
    string name1, name2, search;
    int marks;
    map <string,int> myMap;

    for(int i=0; i<3; i++){
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>name1;
        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>marks;

        myMap[name1] = marks;
    }
    
    cout<<" "<<endl;
    for(auto x: myMap){
        cout<<"Name: "<<x.first<<" and their marks: "<<x.second<<endl;
    }

    cout<<"Enter name of student to find details: ";
    cin>>name2;
    if(myMap.count(name2) == 0 ){ 
        cout<<"Student not found"<<endl;
    }
    else {
        cout<<"Number of student(s) found: "<<myMap.count(name2)<<endl;

        cout<<"Do you want details (yes/no): ";
        cin>>search;

        if (search == "no"){
            exit(0);
        }
        else {
            cout<<"\nDetails are below: "<<endl;
            cout<<"Name: "<<name2<<endl;
            cout<<"Marks: "<<myMap[name2];
        }

    }
 
    return 0;
}