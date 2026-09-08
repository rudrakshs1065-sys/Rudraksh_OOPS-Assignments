#include <iostream>
using namespace std;

class Box{
    private:
    double length,width,height,volume;
    public:
    Box(){
        cout<<"\nEnter dimensions of the box :\n";
    }
    Box(double l,double b,double h){
        length=l;
        width=b;
        height=h;
        cout<<"\nLength of the box : "<<length<<" cm";
        cout<<"\nWidth of the box : "<<width<<" cm";
        cout<<"\nHeight of the box : "<<height<<" cm";
    }

    void find_volume(){
        volume=length*width*height;
        cout<<"\n\nVolume of the box : "<<volume<<" cm^3";
    }
};

int main(){

    double l,w,h;
    cout<<"\nEnter length of the box : ";
    cin>>l;
    cout<<"\nEnter width of the box : ";
    cin>>w;
    cout<<"\nEnter height of the box : ";
    cin>>h;
    Box box(l,w,h);
    box.find_volume();

    return 0;
}