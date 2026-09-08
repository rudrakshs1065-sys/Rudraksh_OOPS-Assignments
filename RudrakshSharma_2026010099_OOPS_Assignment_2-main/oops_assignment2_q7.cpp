#include <iostream>
using namespace std;
static int count=0;

class Demo{
    public:
    Demo(){
        count++;
        cout<<"\nConstructor execution no. : "<<count;
    }
    ~Demo(){
        cout<<"\nDestructor executed no. : "<<count;
        count--;
    }
};

int main(){

    Demo obj1;
    Demo obj2;
    Demo obj3;

    return 0;
}