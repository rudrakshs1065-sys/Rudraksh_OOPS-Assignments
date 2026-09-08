#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int roll_no;
    public:
    Student(){
        name="XYZ";
        roll_no=0;
        cout<<"\nDefault student name : "<<name;
        cout<<"\nDefault student roll number : "<<roll_no;
    }
};

int main(){

    
    Student stu;

    return 0;
}