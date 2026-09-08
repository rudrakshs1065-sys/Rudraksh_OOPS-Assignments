#include <iostream>
using namespace std;

class Employee{
private:
  string name;
  double salary; 
public:
Employee (string n,double s){
     name=n;
     salary=s;
}
friend void compare(Employee emp1,Employee emp2); 
};

void compare(Employee emp1,Employee emp2){
    cout<<"\nFirst employee name : "<<emp1.name;
    cout<<"\nFirst employee salary : Rs. "<<emp1.salary;
    cout<<"\n\nSecond employee name : "<<emp2.name;
    cout<<"\nSecond employee salary : Rs. "<<emp2.salary;
    if (emp1.salary>emp2.salary){
        cout<<"\n\n"<<emp1.name<<" gets more salary.";
    }
    else if (emp2.salary>emp1.salary){
        cout<<"\n\n"<<emp2.name<<" gets more salary.";
    }
}

int main(){

    Employee Employee1("Tarun",25000);
    Employee Employee2("Piyush",28000);
    compare(Employee1,Employee2);
    

    return 0;
}