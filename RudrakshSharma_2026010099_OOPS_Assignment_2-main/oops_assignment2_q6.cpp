#include <iostream>
using namespace std;

class Complex{
    private:
    double real,imaginary;
    public:
    Complex(){
        cout<<"\nEnter the complex number :\n";
    }
    Complex(double r,double i){
        real=r;
        imaginary=i;
    }

    void display(){
        cout<<"\n\nYour complex number : "<<real<<" + "<<imaginary<<"j";
    }
};

int main(){

    double r,i;
    cout<<"\nEnter real value of the complex number : ";
    cin>>r;
    cout<<"\nEnter imaginary value of the complex number : ";
    cin>>i;
    Complex comp;
    Complex comp(r,i);
    comp.display();

    return 0;
}