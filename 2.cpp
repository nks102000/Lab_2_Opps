#include<iostream>
using namespace std;
class student
{
    char name[50];
    int roll;
    float marks[5];
    float total;
    public:
    void get(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll: ";
        cin>>roll;
        for (int i = 0; i < 5; i++)
        {
            cout<<"Enter marks of subject "<<i+1<<": ";
            cin>>marks[i];
        }
        total=0;
        for (int i = 0; i < 5; i++)
        {
            total=total+marks[i];
        }
        
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<"Marks of subject "<<i+1<<"is: "<<marks[i]<<endl;
        }
        cout<<"Total Marks: "<<total<<endl;

    }
};

int main(){
    student s;
    s.get();
    s.display();
    return 0;
}
