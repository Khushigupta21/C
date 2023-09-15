#include<iostream>
using namespace std;
class student{
    protected:
        int rollno;
    public:
        void print(){
        cout<<"Enter your roll number:";
        cin>>rollno;
        }
};
class test:public student{
    protected:
        int sub1,sub2;
    public:
        void print1(){
            cout<<"Enter marks of Two Subjects:";
            cout<<"Subject 1:";
            cin>>sub1;
            cout<<"Subject 2:";
            cin>>sub2;

        }
};
class result:public test{
    public:
        void print2(){
            cout<<"Your Roll number is: "<<rollno<<endl<<
            "You have obtained "<<sub1<< "in subject 1 and "<<sub2<<"in subject 2"<<endl<<
            "The total obtained marks are: "<<sub1+sub2<<endl;

        }

};
int main(){
    result obj;
    obj.print();
    obj.print1();
    obj.print2();
    return 0;
}