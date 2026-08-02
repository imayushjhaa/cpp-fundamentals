#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    string accountHolder;
    double balance;
    static float interestRate;
    static int counter;

    public:
        BankAccount(){        // Default constructor
            accountHolder = " ";
            balance = 0.0;
        }

        BankAccount(string name, double bal){          // parameterized constructor
            accountHolder = name;
            balance = bal;
            counter++;
        }

        void display(int count){
            cout<<count<<" Account holder name: "<<accountHolder<<endl;
            cout<<count<<" Account balance: "<<balance<<endl;
            cout<<count<<" Interest Rate: "<<interestRate<<endl;
            cout<<endl;
        }

        static void changeROI (float newRate){
            interestRate = newRate;
            cout<<"The new interest rate: "<<newRate<<endl;
            cout<<endl;
        }

        static void totalAccountHolders(){
            cout<<"The total number of account holders are: "<<counter<<endl;
            cout<<endl;
        }
};

float BankAccount :: interestRate = 4.5;
int BankAccount :: counter = 0;

int main (){
    string aName; 
    double aBalance;

    BankAccount arr[3];  // array of objects, yaha pr default constructor call hoga!
    for(int i = 0 ; i<3 ; i++){
        cout<<"Enter name of "<<i+1<<" account holder: "<<endl;
        getline(cin, aName);
        cout<<"Enter balance of "<<i+1<<" account holder: "<<endl;
        cin>>aBalance;

        cin.ignore();

        cout<<endl;

        arr[i] = BankAccount(aName,aBalance);
    }

    for(int i=0; i<3 ; i++){
        arr[i].display(i+1);
    } 

    BankAccount ::totalAccountHolders ();
    BankAccount ::changeROI (5.2);

return 0;
}