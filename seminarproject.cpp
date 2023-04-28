#include<iostream>
#include<stdio.h>
#include<string.h>
#include <cstring>
using namespace std;


class bank
{
        int acno;
        char nm[100], acctype[100];
        float bal;  
   public:
        bank(int acc_no, char *name, char *acc_type, float balance)  //Parameterized Constructor
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};
void bank::deposit()   //depositing an amount
{
        int damt1;
        std::cout<<"\n Enter Deposit Amount = ";

        std::cin>>damt1;
        bal+=damt1;
}
void bank::withdraw()  //withdrawing an amount
{
        int wamt1;
        std::cout<<"\n Enter Withdraw Amount = ";
        std::cin>>wamt1;
        if(wamt1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=wamt1;
}
void bank::display()  //displaying the details
{
        std::cout<<"\n ----------------------";
        std::cout<<"\n Accout No. : "<<acno;
        std::cout<<"\n Name : "<<nm;
        std::cout<<"\n Account Type : "<<acctype;
        std::cout<<"\n Balance : "<<bal;  
}
int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        std::cout<<"\n Enter Details: \n";
        std::cout<<"-----------------------";
        std::cout<<"\n Accout No. ";
        std::cin>>acc_no;
        std::cout<<"\n Name : ";
        std::cin>>name;
        std::cout<<"\n Account Type : ";
        std::cin>>acc_type;
        std::cout<<"\n Balance : ";
        std::cin>>balance;
  
        bank b1(acc_no, name, acc_type, balance);  //object is created
        b1.deposit(); //
        b1.withdraw(); // calling member functions
        b1.display(); //
        return 0;
}