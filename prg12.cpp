 #include <iostream>

 using namespace std;

 class BankAccount
 {
    private:
        double AccountNumber,Balance;
        int Process,Amount,Amount1;

    public:
    double getdatail()
    {
        cout<<"\nenter Account Number:";
        cin>>AccountNumber;
        cout<<"\nenter user balance in account:";
        cin>>Balance;
    }
    
    double deposit()
        {   
            cout<<"\nenter Amount for deposit:";
            cin>>Amount;
            if(Amount>0)
            {
                return Balance+=Amount;
            }
            else
            {
                cout<<"Invalid deposit amount,Please Enter A Positive Value...";
            }
        }
    double withdraw()
        {   
            cout<<"\nenter Amount for withdraw:";
            cin>>Amount1;
            if(Amount1>0 && Amount1<=Balance)
            {
                return Balance-=Amount1;
            }
            else
            {
                cout<<"Insufficient Funds or Invalid Withdrawl amount...";
            }
        }

    void Display()
    {
        cout<<"Account number:"<<AccountNumber<<"\t Balance:"<<Balance<<endl;
    }
};

 int main()
    {
        BankAccount B1;
        B1.getdatail();

        
    B1.withdraw();
         B1.deposit();
    B1.withdraw();
         B1.deposit();

            B1.Display();
    }
 
