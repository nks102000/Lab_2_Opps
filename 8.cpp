#include<iostream>
#include<math.h>
using namespace std;
class bank{
    char name[50];
    int no;
    char type[50];
    int bal;
    public:
    void get(){
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter acc. no.: "<<endl;
        cin>>no;
        cout<<"Enter Acc. type: "<<endl;
        cin>>type;
        cout<<"Enter initial balance: "<<endl;
        cin>>bal;
    }
    void deposite(int amt){
        bal=bal+ amt;
        cout<<"Balace updated"<<endl;
    }
    void withdraw(int amt){
        if((bal-amt)>=1000){
            bal=bal-amt;
            cout<<amt<<" amt withdrawn"<<endl;
        }
        else{
            cout<<"Withdraw not possible as balance going below min balance amt"<<endl;
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Balance:"<<bal<<endl;
    }
};

int main(){
    bank b;
    b.get();
    int d;
    cout<<"Enter the amount to be deposited"<<endl;
    cin>>d;
    b.deposite(d);
    cout<<"Enter the amount to be withdwarn"<<endl;
    cin>>d;
    b.withdraw(d);
    b.display();
    cout<<"Enter the amount to be withdrawn"<<endl;
    cin>>d;
    b.withdraw(d);
    b.display();
    return(0);
}