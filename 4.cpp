#include<iostream>
using namespace std;
class complex{
    float real,img;
    public:
    void input()
    {   
        cout<<"Enter:";
        cin>>real;
        cin>>img;
    }
    void show() {
        cout<<real<<"+i"<<img<<endl;
    }
};
int main(){
    complex c[10];
    for (int i = 0; i < 10; i++)
    {
        c[i].input();
        c[i].show();
    }
    return 0;
    
}
