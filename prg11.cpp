 #include <iostream>

 using namespace std;

 class Car
 {
    private:
    string Company;
    string Model;
    int year;

    public:
    void get()
    {
        cout<<"\nEnter car Company name:";
        cin>>Company;
        cout<<"Enter car Model name:";
        cin>>Model;
        cout<<"Enter buy car In Which Year:";
        cin>>year;
    }
    void set()
    {
        cout<<"-------------->CAR DETAIL<---------------";
        cout<<"\nCar Company Name:"<<Company;
        cout<<"\nCar Model Name:"<<Model;
        cout<<"\nCar Owner Buy car In "<<year<<" Year.";
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    }
};
int main()
{
    Car C1,C2,C3;

    C1.get();
    C1.set();
    C2.get();
    C2.set();
    C3.get();
    C3.set();
}