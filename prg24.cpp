 #include <iostream>
using namespace std;

class MathOperations {
public:
int a,b;
double x,y;
float p,q;
long m,n;
    int add() {
        return a + b;
    }

    
    double subtract() {
        return x - y;
    }

    
    float multiply() {
        return p * q;
    }

    
    long divide() {
        if (n != 0)
            return m / n;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    MathOperations math;
int a,b;
double x,y;
float p,q;
long m,n;
        cout<<"\nenter value of a and b:";
        cin>>a>>b;
        cout<<"\nenter value of x and y:";
        cin>>x>>y;
        cout<<"\nenter value of p and q:";
        cin>>p>>q;
        cout<<"\nenter value of m and n:";
        cin>>m>>n;

    cout << "Addition: " << math.add() << endl;
    cout << "Subtraction: " << math.subtract() << endl;
    cout << "Multiplication: " << math.multiply() << endl;
    cout << "Division: " << math.divide() << endl;

    
}
