#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int roll_no;
    double cgpa;
    public:
    Student(){
       name="XYZ";
       roll_no=0;
       cgpa=0.0;
       cout<<"\nDefault student name : "<<name;
       cout<<"\nDefault student roll number : "<<roll_no;
       cout<<"\nDefault student CGPA : "<<cgpa;

    }
    Student(string n,int r){
       name=n;
       roll_no=r;
       cout<<"\nStudent name : "<<name;
       cout<<"\nstudent roll number : "<<roll_no;
       cout<<"\nDefault student CGPA : "<<cgpa;
    }
    Student(string n,int r,double c){
       name=n;
       roll_no=r;
       cout<<"\nStudent name : "<<name;
       cout<<"\nstudent roll number : "<<roll_no;
       cout<<"\nStudent CGPA : "<<cgpa;
    }
};