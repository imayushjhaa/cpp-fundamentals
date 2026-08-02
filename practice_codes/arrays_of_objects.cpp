// task number: 1  ( advanced implementation using arrays of objects )
#include<iostream>
#include<string>
using namespace std;

class Player{
    string name;
    int jerseyNumber;

    public:
        static int totalPlayers; 

        Player (){
            name = " ";
            jerseyNumber = 0;
        };

        Player (string name, int jerseyNumber){
            this->name = name;
            this->jerseyNumber = jerseyNumber;
            totalPlayers++;
        }

        void print(int count){
            cout<<"Name of player "<<count<<": "<<name<<endl;
            cout<<"Jersey no. of player "<<count<<": "<<jerseyNumber<<endl;
            cout<<endl;
        }
    
    static void getTotalPlayers (){
        cout<<"The total number of players are: "<<totalPlayers<<endl;
    }
};

int Player :: totalPlayers = 0;

int main(){
    string pName;
    int pJersey;
    Player p;    // iske liye default constructor call hoga

    Player team[3];   // array of objects, iske liye bhi default constructor call hoga

    for (int i = 0 ; i<3 ; i++){
        cout<<"Enter name of player: "<< i+1 <<": "<<endl;
        getline (cin, pName);
        cout<<"Enter jersey number of player: "<< i+1 <<": "<<endl;
        cin>>pJersey;

        cin.ignore();

        team[i] = Player (pName, pJersey);
    }

    for (int i = 0 ; i < 3 ; i++){
        team[i].print(i+1);
    }

    Player :: getTotalPlayers();

    return 0;
} 