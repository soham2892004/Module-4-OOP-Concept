 #include <iostream>

 using namespace std;

 class Circle
 {
    private:

    double area,circumference,radius;


    
    public:

    double getvalue()
    {
        cout<<"\nenter radious value for circle:";
        cin>>radius;
    }
    double Area()
    {
        area=3.14*radius*radius;
        cout<<"\nArea="<<area;
    }
    double Circumference()
    {
        circumference=2*3.14*radius;
        cout<<"\nCircumference="<<circumference;
    }

 };

 int main()
 {
    double area,circumference,radius;
    Circle c1,c2,c3;
    
    c1.getvalue();
    c1.Area();
    c1.Circumference();

    c2.getvalue();
    c2.Area();
    c2.Circumference();

    c3.getvalue();
    c3.Area();
    c3.Circumference();

    
 }
