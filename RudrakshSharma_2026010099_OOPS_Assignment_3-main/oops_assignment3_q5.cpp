#include <iostream>
using namespace std;

class BankAccount{
    private:
    int accountNo;
    double balance;
    public:
    static int totalAccounts;
    BankAccount(int no,double bal){
        accountNo=no;
        balance=bal;
        totalAccounts++;
    }
    friend void display_details(BankAccount account);
    void display_totalAccounts(){
        cout<<"\n\nTotal number of accounts : "<<totalAccounts;
    }
};
int BankAccount::totalAccounts=0;
void display_details(BankAccount account){
    cout<<"\n\nAccount details : ";
    cout<<"\n\nAccount number : "<<account.accountNo;
    cout<<"\nAccount balance : Rs. "<<account.balance;   
}

int main(){

    BankAccount accnt1(1201,35000.68);
    BankAccount accnt2(1329,45800.78);
    BankAccount accnt3(235,34789.91);
    display_details(accnt1);
    display_details(accnt2);
    display_details(accnt3);
    accnt1.display_totalAccounts();

    return 0;
}