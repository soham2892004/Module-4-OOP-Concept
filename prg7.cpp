 #include <iostream>

 using namespace std;

 class Rectangle
 {
    private:
        float length,width;

    public:
        float getvalue()
        {
            cout<<"\nenter value for length and width:";
            cin>>length>>width;
        }
        float Area()
        {
            return length*width;
        }
        float Perimeter()
        {
            return (length+width)*2;
        }
};
int main()
{
    Rectangle R1,R2,R3;
    R1.getvalue();
    R2.getvalue();
    R3.getvalue();
    cout<<"Area of Rectangle 1,2 & 3:\t"<<R1.Area()<<"\t"<<R2.Area()<<"\t"<<R3.Area();
    cout<<"\nPerimeter of Rectangle 1,2 & 3:\t"<<R1.Perimeter()<<"\t"<<R2.Perimeter()<<"\t"<<R3.Perimeter();
}
