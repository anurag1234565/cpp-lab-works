/*A program using inline function to calculate the multiplication and division of two */
#include<iostream>
using namespace std;

class Number
{
    int product;
    float quotient;
    public:
        inline void multiply(int a, int b)
        {
            product = a*b;
            cout<<"Product: "<<product<<"\n";
        }

        inline void divide(int a, int b)
        {
            quotient = (float)(a/b);
            cout<<"Quotient"<<quotient;

        }
};

int main()
{
    Number num;
    int a,b;
    cin>>a>>b;
    num.multiply(a,b);
    num.divide(a,b);
    return 0;
}
