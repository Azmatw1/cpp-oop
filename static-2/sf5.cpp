#include<iostream>
#include<string>
using namespace std;
class BankAccount{
private:
static int balance;
public:
void deposit(int n);
void withdraw(int n);
void displayBalance();

};
 int BankAccount:: balance;
void BankAccount::deposit(int n){
    balance+=n;
}
void BankAccount::withdraw(int n){
    balance-=n;
}
void BankAccount::displayBalance(){
    cout<<"Balance is: "<<balance<<endl;
}
int main(){
    BankAccount b;
    int n1;
    cout<<"Enter ammount to be deposited: ";
    cin>>n1;
    b.deposit(n1);
    cout<<"Enter ammount to be withdrawn: ";
    cin>>n1;
    b.withdraw(n1);
    b.displayBalance();
    return 0;


}