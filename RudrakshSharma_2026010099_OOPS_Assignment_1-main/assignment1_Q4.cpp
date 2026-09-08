#include <iostream>
using namespace std;

struct student{
    string name;
    int roll_number;
    string degree;
    string hostel;
    float cgpa;

    void addDetails(){
        cout<<"\n\nEnter student details :\n\n";
        cout<<"Enter student name : ";
        getline(cin,name);
        cout<<"Enter student hostel : ";
        getline(cin,hostel);
        cout<<"Enter student roll number : ";
        cin>>roll_number;
        cout<<"Enter student degree : ";
        cin>>degree;
        cout<<"Enter student CGPA :";
        cin>>cgpa;
    }

    void updateDetails(){
        cout<<"\n\nEnter updated student details :\n\n";
        cout<<"Enter new student name : ";
        getline(cin,name);
        cout<<"Enter new student hostel : ";
        getline(cin,hostel);
        cout<<"Enter new student roll number : ";
        cin>>roll_number;
        cout<<"Enter new student degree : ";
        cin>>degree;
        cout<<"Enter new student CGPA :";
        cin>>cgpa;
    }

    void updateCGPA(){
        cout<<"\n\nEnter new student CGPA : ";
        cin>>cgpa;
    }

    void updateHostel(){
        cout<<"\n\nEnter new student hostel : ";
        getline(cin,hostel);
    }

    void displayDetails(){
        cout<<"\n\nStudent details :\n\n";
        cout<<"Student name : "<<name;
        cout<<"Student roll number : "<<roll_number;
        cout<<"Student degree : "<<degree;
        cout<<"Student hostel : "<<hostel;
        cout<<"Student CGPA :"<<cgpa;
    }
};

int main() {
     
    student std1;
    std1.addDetails();
    std1.updateDetails();
    std1.updateCGPA();
    std1.updateHostel();
    std1.displayDetails();

    return 0;
}