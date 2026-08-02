// task number: 1 ( simple implementation using while loop )
#include<iostream>
#include<string>
using namespace std;

class Player{
    string name;
    int jerseyNumber;

    public:
        static int totalPlayers;
        Player (string name, int jerseyNumber){
            this->name = name;
            this->jerseyNumber = jerseyNumber;
            totalPlayers++;
        }
        void print(Player p){
            cout<<"PLayer "<<totalPlayers<<" name: "<<p.name<<endl;
            cout<<"PLayer "<<totalPlayers<<" jersey number: "<<p.jerseyNumber<<endl;
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

 
    int count = 1;

    while ( count < 12 ){
        cout<<"Enter player "<<count<<" name: "<<endl;
        getline (cin, pName);
        cout<<"Enter player "<<count<<" jersey number: "<<endl;
        cin>>pJersey;

        cin.ignore();

        Player tempPlayer (pName, pJersey);
        tempPlayer.print(tempPlayer);

        count++;
    }

    Player :: getTotalPlayers();

    return 0;
}