#include <iostream>
using namespace std;

class Student{
private:
  string name;
  double marks; 
public:
Student (string n,double m){
     name=n;
     marks=m;
}
friend void display(Student stu); 
};

void display(Student stu){
    cout<<"\nStudent name : "<<stu.name;
    cout<<"\nStudent marks : "<<stu.marks;
}

int main(){

    Student student("Aarush",78.6);
    display(student);
    

    return 0;
}