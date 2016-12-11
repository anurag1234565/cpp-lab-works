#include<iostream>
using namespace std;

void computeSphere(float &a, float &b, float r)
{
    a = (4*3.14*r*r*r)/3;
    b = 4*3.14*r*r;
}

int main()
{
    float v,s,r;
    cout<<"Radius: ";
    cin>>r;
    computeSphere(v,s,r);
    cout<<"Volume of sphere="<<v;
    cout<<"\nTSA of sphere="<<s;
    return 0;
}
