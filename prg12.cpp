 #include <iostream>

 using namespace std;

 class BankAccount
 {
    private:
        double AccountNumber,Balance;
        int Process;

    public:
        BankAccount(double AcNo,double Bal):AccountNumber(AcNo),Balance(Bal){}

    double deposit(double Amount)
        {
            if(Amount>0)
            {
                return Balance+=Amount;
            }
            else
            {
                cout<<"Invalid deposit amount,Please Enter A Positive Value...";
            }
        }
    double withdraw(double Amount)
        {
            if(Amount>0 && Amount<=Balance)
            {
                return Balance-Amount;
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
        BankAccount B1(12345,8000.00);

        B1.deposit(400.00);
        B1.withdraw(300.00);
        B1.deposit(750.00);
        B1.withdraw(1500.00);
            B1.Display();
    }
 