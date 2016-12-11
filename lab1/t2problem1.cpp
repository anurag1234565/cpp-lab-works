#include<iostream>
using namespace std;

class Money
{
    public:
        void simpleIntrest(float t, float p, float r=1.5)
        {
            float i = (p*t*r)/100;
            cout<<"intrest: "<<i;
        }
};

int main()
{
    Money m;
    float p,t;
    cout<<"principal: ";
    cin>>p;
    cout<<"\ntime: ";
    cin>>t;
    m.simpleIntrest(p,t);
}
