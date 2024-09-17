 #include <iostream>

 using namespace std;

 class Rectangle
 {
    private:
        float length,width;

    public:
        float Area(float length,float width)
        {
            return length*width;
        }
        float Perimeter(float length,float width)
        {
            return (length+width)*2;
        }
};
int main()
{
    Rectangle R1,R2,R3;
    cout<<"Area of Rectangle 1,2 & 3:\t"<<R1.Area(15,16.4)<<"\t"<<R2.Area(14.3,12.5)<<"\t"<<R3.Area(5,6.5);
    cout<<"\nPerimeter of Rectangle 1,2 & 3:\t"<<R1.Perimeter(15,16.4)<<"\t"<<R2.Perimeter(14.3,12.5)<<"\t"<<R3.Perimeter(5,6.5);
}