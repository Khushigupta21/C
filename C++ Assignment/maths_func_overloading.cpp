#include<iostream>
using namespace std;
int sum(int x, int y,int z){
    //Function for addition
    return x+y+z;
}
int sum(){
    int x=10; int y=2;
    //Function for Subtraction
    return x-y;
}
float sum(float w,float x,float y,float z){
    //Function for Multiplication
    return w*x*y*z;
}
int sum(int x,int y){
    //Function for Division
    return x/y;
}
int main(){
    cout<<"The addition is"<<sum(23,45,2)<<endl;
    cout<<"The subtraction is"<<sum()<<endl;
    cout<<"The Multiplication is"<<sum(2,2,3,2)<<endl;
    cout<<"The division is "<<sum(10,2)<<endl;

    return 0;
}
