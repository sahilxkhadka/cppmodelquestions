//Design class to represent a bank account with data members name, account-number, account-type and balance and functions to assign initial....
#include<iostream>
using namespace std;

class BankAcc {
    private:
        string name, accType;
        int accNum;
        float balance;
    public:
        void setDetails() {
            cout<<"Enter your name:"<<endl;
            cin>>name;
            cout<<"Enter your account number:"<<endl;
            cin>>accNum;
            cout<<"Enter your account type:"<<endl;
            cin>>accType;
            cout<<"Enter the balance you would like to keep"<<endl;
            cin>>balance;
        }
        void depositMoney() {
            float deposit;
            cout<<"Enter the amount you would like to deposit:"<<endl;
            cin>>deposit;
            balance += deposit;
        }
        bool checkBalance () {
            if(balance > 0) 
                return true;
            return false;
        }
        void withdrawMoney(){
            float withdraw;
            cout<<"Enter the amount you want to withdraw"<<endl;
            cin>>withdraw;
            if(checkBalance() && withdraw < balance) {
                balance -= withdraw;
            }
            else {
                cout<<"Cannot withdraw money"<<endl;
            }
        }
        void getDetails() {
            cout<<"The remaining balance in your acc is : "<<balance<<" and your name is "<<name;
        }
};

int main (){
    BankAcc sahil;
    sahil.setDetails();
    sahil.depositMoney();
    sahil.withdrawMoney();
    sahil.getDetails();
    return 0;
}