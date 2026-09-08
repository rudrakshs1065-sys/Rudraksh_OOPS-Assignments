#include <iostream>
using namespace std;

class num{
    private:
    int sum(int a,int b){
        return a+b;
    }
    public :
    
    void sum_check(int a,int b){
        if ((sum(a,b))%2==0){
            cout<<"\nSum of both numbers is even.\n\n";
        }
        else {
            cout<<"\nSum of both numbers is odd.\n\n";
        }
    }

};

int main(){
    num n1;
    n1.sum_check(23,45);
    n1.sum_check(3,7);
    return 0;
}