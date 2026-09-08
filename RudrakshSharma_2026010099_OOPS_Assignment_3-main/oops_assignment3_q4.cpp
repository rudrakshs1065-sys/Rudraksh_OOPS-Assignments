#include <iostream>
using namespace std;

class Student{
   private:
   string name;
   int roll_no;
   public:
   static int strength;
   void add(){
    cout<<"\n\nEnter student name : ";
    cin>>name;
    cout<<"Enter student roll number : ";
    cin>>roll_no;
    strength++;
   }
   void show_details(){
    cout<<"\n\nStudent name : "<<name;
    cout<<"\nStudent roll number : "<<roll_no;
   }
   void show_strength(){
    cout<<"\n\nTotal number of students : "<<Student::strength;
   }
};
int Student::strength=0;

int main(){

    Student stu1;
    stu1.add();
    stu1.show_details();
    Student stu2;
    stu2.add();
    stu2.show_details();
    Student stu3;
    stu3.add();
    stu3.show_details();
    stu3.show_strength();

    return 0;
}