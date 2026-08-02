#include<iostream>
#include<string>
using namespace std;

class Player{
    string name;

    public:
        Player(string name){     // parameterized constructor
            this->name = name;
            cout<<"PLayer "<<name<<" enters the game!"<<endl;
        }

        ~Player(){      // this is destructor
            cout<<"Player "<<name<<" left the game!"<<endl;
        }
};
      
int main() {
    cout << "--- Main Function Started ---" <<endl;

    Player p1("Ayush");

    {
        cout << "\n--- Entering Local Block ---" <<endl;
        Player p2("Spidey"); 
        cout << "--- Exiting Local Block ---" << endl;
    } 

    cout << "\n--- Back in Main Function ---" << endl;
    cout << "--- Main Function Ending ---" << endl;

    return 0;
}