#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        cout<<"Iteration number : "<<i+1<<endl;
    }
    cout<<endl<<endl;
    int i=0;
    for(;i<5;i++){
        cout<<"Iteration number : "<<i+1<<endl;
    }
    cout<<endl<<endl;

    int j=0;
    for(;j<5;){
        cout<<"Iteration number : "<<i+1<<endl;
        j++;
    }
    cout<<endl<<endl;
    i=0;
    while(i<5){
       cout<<"Iteration number : "<<i+1<<endl;
       i++;
    }
    i=0;
    cout<<endl<<endl;
    do{cout<<"Iteration number : "<<i+1<<endl;
       i++;}
       while(i<5);

        return 0;
}