#include <iostream>
using namespace std;

class Number{
private:
  int a,b; 
public:
Number (int n1,int n2){
     a=n1;
     b=n2;
}
friend void sum(Number num); 
};

void sum(Number num){
    cout<<"\nFirst number : "<<num.a;
    cout<<"\nSecond number : "<<num.b;
    cout<<"\n\nSum of both numbers : "<<num.a+num.b;
}

int main(){

    Number num(12,34);
    sum(num); 

    return 0;
}