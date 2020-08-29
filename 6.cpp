#include<iostream>
using namespace std;
class employee
{
    char name[50];
    int id;
    float bs;
    int age;
    float gross;
    public:
    void get(){

        cout<<("\nEnter the details of employee");
        printf("\nEnter name : ");
        cin>>name;
        cout<<("\nEnter id : ");
        cin>>id;
        cout<<("\nEnter Base Salary : ");
        cin>>bs;
        cout<<("\nEnter age : ");
        cin>>age;  
         gross=bs + bs*0.8 + bs*0.1;  
    }

    void display(){
        cout<<("\nDisplaying information");
        cout<<"\nName:"<<name;
        cout<<"\n ID: "<<id;
        cout<<"\n Age: "<<age;
        cout<<"\n Base Salary: "<<bs;
        cout<<"\n Gross Salary: "<<gross;
    }
};
int main(){
    cout<<"\nEnter the number of inputs";
    int n;
    cin>>n;
    employee c[n];
    for (int i = 0; i < n; i++)
    {
        c[i].get();
    }
    for (int i = 0; i < n; i++)
    {
        c[i].display();
    }
    return 0;
    
}