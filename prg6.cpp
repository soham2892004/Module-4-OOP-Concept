 #include <iostream>

 using namespace std;

 class Circle
 {
    private:

    double area,circumference,radius;
    
    public:
    double Area(int radius)
    {
        area=3.14*radius*radius;
        cout<<"\nArea="<<area;
    }
    double Circumference(double radius)
    {
        circumference=2*3.14*radius;
        cout<<"\nCircumference="<<circumference;
    }

 };

 int main()
 {
    
    Circle c1,c2,c3;
    c1.Area(12);
    c2.Area(13);
    c3.Area(14);

    c1.Circumference(12);
    c2.Circumference(13);
    c3.Circumference(14);
 }