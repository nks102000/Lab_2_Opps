#include<iostream>
#include<math.h>
using namespace std;
class cor{
    float x,y,dis;
    public:
    void input()
    {   
        cout<<"Enter x:";
        cin>>x;
        cout<<"Enter y:";
        cin>>y;
    }
    double cal(cor c1, cor c2){
        dis=sqrt((c1.x-c2.x)*(c1.x-c2.x)+(c1.y-c2.y)*(c1.y-c2.y));
        return(dis);
    }
};
int main(){
    cor c1,c2,c3;
    double d;
    c1.input();
    c2.input();
    d=c3.cal(c1,c2);
    cout<<"Distance: "<<d;
}