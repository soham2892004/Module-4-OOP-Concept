 #include <iostream>

 using namespace std;

 class Arithmetic
 {
    public:
    double no1,no2;

    Arithmetic()
    {
        cout<<"Enter no.1:";
        cin>>no1;
        cout<<"\nEnter no.2:";
        cin>>no2;
    }
    double Addition()
    {
        return no1+no2;
    }
    double Subtraction()
    {
        return no1-no2;
    }
    double Multiplication()
    {
        return no1*no2;
    }
    double Division()
    {
        return no1/no2;
    }
};

 int main()
 {
    Arithmetic a1,a2;

    cout<<"Addition="<<a1.Addition()<<"Subtraction="<<a1.Subtraction()<<"Multiplication="<<a1.Multiplication()<<"Division="<<a1.Division()<<endl;
    cout<<"Addition="<<a2.Addition()<<"Subtraction="<<a2.Subtraction()<<"Multiplication="<<a2.Multiplication()<<"Division="<<a2.Division()<<endl;


    
 }