#include<iostream>
using namespace std;
class person{
    protected:
    string name,age;
    public:
    person(){
        cout<<"Enter your name";
        cin>>name;
        cout<<"Enter your age:";
        cin>>age;
    }
};
class student{
    protected:
    float percentage;
    public:
    student(){
        cout<<"Enter your percentage:";
        cin>>percentage;
    }
};
class teacher:public person, public student{
    protected:
    int salary;
    public:
     teacher(){
        cout<<"Enter your salary";
        cin>>salary;
        cout<<"Your name is "<<name<<endl<<"Age is "
        <<age<<endl<<"Percentage is "<<percentage<<endl
        <<"Your Salary is "<<salary<<endl;

    }
};
int main(){
    teacher obj;
    return 0;
}