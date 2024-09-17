 #include <iostream>

 using namespace std;

 inline double cube(int no)
 {
    return no*no*no;
 }

 int main()
 {
    int no;
    cout<<"Enter Value for Multiplication and Cubic value:";
    cin>>no;

    //multipliaction value
    double multiplied=4*no;

    double cubicValue=cube(no);

    cout<<"Multiplication of"<<no<<"and 4="<<multiplied;
    cout<<"\nCubic of"<<no<<"="<<cubicValue;


 }