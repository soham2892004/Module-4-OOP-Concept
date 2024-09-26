 #include <iostream>

 using namespace std;

    class Calculator
    {
        public:
        float no1,no2;

        float getvalue()
        {
            cout<<"enter no1,no2:";
            cin>>no1>>no2;
        }
        float Addition()
        {
            return no1+no2;
        }
        float Subtraction()
        {
            return no1-no2;
        }
        float Multiplication()
        {
            return no1*no2;
        }
        float Divison()
        {
            return no1/no2;
        }
        float Modulo()
        {
        if (no2 != 0) 
        {
            return (int)no1 % (int)no2;
        }
        else
        {
            cout << "Error: Modulo by zero!" << endl;
            return 0; 
        }
        }
    };
 int main()
 {
    Calculator c1;
    c1.getvalue();
    cout<<"Adition of no.1 &no.2:"<<c1.Addition()<<endl;
    cout<<"Subtraction of no.1 &no.2:"<<c1.Subtraction()<<endl;
    cout<<"Multiplication of no.1 &no.2:"<<c1.Multiplication()<<endl;
    cout<<"Division of no.1 &no.2:"<<c1.Divison()<<endl;
    cout<<"Modulo of no.1 &no.2:"<<c1.Modulo()<<endl;

 }
