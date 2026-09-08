#include <iostream>
using namespace std;

int main(){
    cout<<"\n\nPlease enter temperature in Degree Celsius : ";
    float cel;
    cin>>cel;
    float farh=	(cel * 9/5) + 32;
    cout<<"\n\nYour given temperature = "<<cel<<" degree C"<<endl;
    cout<<"Temperatur in fahrenheit = "<<farh<<"  degree F";	

    return 0;
}