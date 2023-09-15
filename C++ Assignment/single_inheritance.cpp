#include<iostream>
using namespace std;
class cricketer{
    public:
    string pname;
    int runs,avgrun,player;
    void print(){
        cout<<"Enter Your runs:";
        cin>>runs;
        cout<<"Enter Best Player name:";
        cin>>pname;
        cout<<"Enter total number of player:";
        cin>>player;
    }
};
class batman:public cricketer
{
    public:
    void print1(){
        avgrun=runs/player;
        cout<<"Average run of match is "<<avgrun<<endl<<"Best player is"<<pname;

    }
};
int main(){
        batman obj;
        obj.print();
        obj.print1();
    return 0;
}