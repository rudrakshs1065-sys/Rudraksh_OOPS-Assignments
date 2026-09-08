#include <iostream>
using namespace std;

namespace positive{
    int val;
    bool check(){
       if (val>0){
        return true;
    }
       else{
        return false;
       }
    }
};

namespace even{
    int val;
    bool check(){
        if (val%2==0){
            return true;
        }
        else {
            return false;
        }
    }
};

int main(){

    cout<<"\nEnter a number to check whether its positive : ";
    cin>>positive::val;
    if (positive::check())
    {  
        cout<<"\n'"<<positive::val<<"' is positive.";
    }
    else{
        cout<<"\n'"<<positive::val<<"' is negative.";
    }


    cout<<"\n\nEnter a number to check whether its even : ";
    cin>>even::val;
    if (even::check())
    {
        cout<<"\n"<<even::val<<" is even.";
    }
    else{
        cout<<"\n"<<even::val<<" is odd.";
    }

    return 0;
}