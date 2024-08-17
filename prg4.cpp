 #include <iostream>

 using namespace std;

    class Calculator
    {
        public:
        int no1,no2;

        int Addition()
        {
            return no1+no2;
        }
        int Subtraction()
        {
            return no1-no2;
        }
        int Multiplication()
        {
            return no1*no2;
        }
        int Divison()
        {
            return no1/no2;
        }
        int Modulo()
        {
            return no1%no2;
        }
    };
 int main()
 {
    Calculator c1;
    c1.no1=50;
    c1.no2=40;
    cout<<"Adition of no.1 &no.2:"<<c1.Addition()<<endl;
    cout<<"Subtraction of no.1 &no.2:"<<c1.Subtraction()<<endl;
    cout<<"Multiplication of no.1 &no.2:"<<c1.Multiplication()<<endl;
    cout<<"Division of no.1 &no.2:"<<c1.Divison()<<endl;
    cout<<"Modulo of no.1 &no.2:"<<c1.Modulo()<<endl;

 }