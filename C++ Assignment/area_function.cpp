#include<iostream>
using namespace std;
// class jojo{
//     public:
int area(int h, int b){
//Area of triangle
    int areas;
    return areas=0.5*b*h;
}
int area(int r){
//Area of circle
    int areas;
    return areas=3.14*r*r;
}
int area(){
//Area of Rectangle
    int l=23,w=2,areas;
    return areas=l*w;
}
double area(double a){
//Area of square
    double sum;
   return sum=a*a;
}
// };
int main(){
    // jojo obj;
    cout<<"Area of triangle "<<area(12,3)<<endl;
    cout<<"Area of circle "<<area(4)<<endl;
    cout<<"Area of rectangle "<<area()<<endl;
    cout<<"Area of square "<<area(2.3)<<endl;


    return 0;
}