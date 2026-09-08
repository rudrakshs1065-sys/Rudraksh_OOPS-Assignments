#include <iostream>
using namespace std;

class Complex {
    private:
    int real,imaginary;

    public:
    void set(){
        cout<<"\nEnter the real value : ";
        cin>>real;
        cout<<"\nEnter the imaginary value : ";
        cin>>imaginary;
    }
    void display(){
        cout<<"\n\nYour complex number : "<<real<<" + "<<imaginary<<"j";
    }
    Complex sum(Complex comp){
        Complex comp3;
        comp3.real=real+comp.real;
        comp3.imaginary=imaginary+comp.imaginary;

        return comp3;
    }

};

int main(){

    cout<<"\nFirst complex number :\n";
    Complex comp1;
    comp1.set();
    comp1.display();

    cout<<"\n\nSecond complex number :\n";
    Complex comp2;
    comp2.set();
    comp2.display();

    Complex comp3=comp1.sum(comp2);
    cout<<"\n\nSum of both complex numbers : ";
    comp3.display();

    return 0;
}