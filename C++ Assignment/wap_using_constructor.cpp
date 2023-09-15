#include<iostream>
using namespace std;
class student{
   public:
   
   student(){
    int a,b,c;
    cout<<"Enter Any two Number:";
    cin>>a>>b;
    cout<<"enter 1 to add\nenter 2 to subtract\nenter 3 to multiply\nenter 4 to divison\n";
    cin>>c;
    switch(c){
        case 1:
            cout<<"Addition of a="<<a<<"and b="<<b<<"is"<<a+b<<endl;
            break;
        case 2:
            cout<<"Subtarction of a="<<a<<"and b="<<b<<"is"<<a-b<<endl;
            break;
        case 3:
            cout<<"Multiply of a="<<a<<"and b="<<b<<"is"<<a*b<<endl;
            break;
        case 4:
        	if(b==0){
        		cout<<"Not divisible by zero(0)";
			}
			else{
				cout<<"Division of a="<<a<<"and b="<<b<<"is"<<a%b<<endl;
				}
            break;
        default:
         cout<<"Invalid Choice";
    }
   }
   
};
int main(){
    student s1;
    student s2;
    return 0;
}
