#include<iostream>
using namespace std;
class line{
    public:
    inline float multi(float x, float y){
        return (x*y);
    }
    inline float cube(float x){
        return (x*x*x);
    }
};
int main(){
    line obj;
    cout<<obj.multi(2,3)<<endl;
    cout<<obj.cube(5)<<endl;
    return 0;
}
