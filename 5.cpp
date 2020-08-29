#include<iostream>
using namespace std;
class dis11{
    int feet,inches;
    public:
    void get(){
        cout<<"Enter Inches: ";
        cin>>inches;
        cout<<"Enter Feet: ";
        cin>>feet;
    }
    void add(dis11 d1,dis11 d2){
        inches=d1.inches+d2.inches;
        feet=d1.feet+d2.feet+(inches/12);
        inches=(inches%12);
    }
    dis11 add(dis11 d2)
    {
        dis11 temp;
        temp.inches=inches+d2.inches;
        temp.feet=feet+d2.feet+(temp.inches/12);
        temp.inches=temp.inches%12;
        return temp; 
    }
      void show() {
        cout<<"Inches"<<inches<<endl;
        cout<<"Feet"<<feet<<endl;
    }
};

int main(){
    dis11 c1, c2, c3,c4;
    c1.get();
    c2.get();
    c3.add(c1,c2);
    c4=c1.add(c2);
    c1.show();
    c2.show();
    c3.show();
    c4.show();
return 0;
}