#include <iostream>
using namespace std;

class rectangle{
    private:
    double length,breadth;
    public:
    rectangle(double l,double b){
        length=l;
        breadth=b;
        cout<<"\nLength of the rectangle : "<<length<<" cm";
        cout<<"\nBreadth of the rectangle : "<<breadth<<" cm";
    }

};

int main(){

    double l,b;
    cout<<"\nEnter length of the rectangle : ";
    cin>>l;
    cout<<"\nEnter breadth of the rectangle : ";
    cin>>b;
    rectangle rect(l,b);
    

    return 0;
}