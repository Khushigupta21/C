#include<iostream>
using namespace std;
class bank{
    public:
    int acc_no;
    double balance_acc,dp_amt,wd_amt;
    string acc_type,name_depositer;
    
    void assign_values(){
        cout<<"Enter your name:";
        cin>>name_depositer;
        cout<<"Enter Your Account Number:";
        cin>>acc_no;
        cout<<"Enter Type Of Account:";
        cin>>acc_type;
        cout<<"Enter Your Total Balance:";
        cin>>balance_acc;
    }
    double deposite_amt(){
        cout<<"Enter Your deposite Amount:";
        cin>>dp_amt;
        balance_acc=balance_acc+dp_amt;
        return balance_acc;
    }
    double withdraw_amt(){
        cout<<"Enter Your withdraw Amount:";
        cin>>wd_amt;
        balance_acc=balance_acc-wd_amt;
        return balance_acc;
    }
    void display(){
        cout<<"User:"<<name_depositer<<endl;
        cout<<"Balance:"<<balance_acc<<endl;
    }

};
int main(){
    bank obj;
    obj.assign_values();
    obj.deposite_amt();
    obj.withdraw_amt();
    obj.display();
    return 0;
}