 #include <iostream>

 using namespace std;

 class Person
 {
    private:
    string name;
    int age;
    string country;

    public:
       string Get()
       {
        cout<<"\nenter name:";
        cin>>name;
        cout<<"enter age:";
        cin>>age;
        cout<<"enter country:";
        cin>>country;
       }
       string Set()
       {
        cout<<"=*=*=*=*=*=*=*Person Detail*=*=*=*=*=*=*=*=*=";
        cout<<"\nName:"<<name;
        cout<<"\nAge:"<<age;
        cout<<"\nCountry:"<<country;
       }
 };

 int main()
 {
    Person p1,p2,p3;
    p1.Get();
    p1.Set();
    p2.Get();
    p2.Set();
    p3.Get();
    p3.Set();
 }