#include <iostream>
using namespace std;

class Employee{
    private:
    string name;
    int id;
    double salary;
    public:
    Employee(string n,int i,double s){
        id=i;
        name=n;
        salary=s;
        cout<<"\n\nEmployee ID : "<<id;
        cout<<"\nEmployee name : "<<name;
        cout<<"\nEmployee salary : Rs. "<<salary;
    }
};

int main(){

    string name;
    int id;
    double salary;
    cout<<"Enter employee ID : ";
    cin>>id;
    cout<<"\nEnter employee name : ";
    cin>>name;
    cout<<"\nEnter employee salary : ";
    cin>>salary;
    Employee emp(name,id,salary);

    return 0;
}