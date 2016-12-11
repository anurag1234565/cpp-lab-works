#include<iostream>
using namespace std;

class Cube
{
    public:
        float volume(float);
};

class Cylinder
{
    public:
        float volume(float, float);
};

class Cuboid
{
    public :
        float volume(float, float, float);
};

float Cube::volume(float a)
{
    return (a*a*a);
}

float Cylinder::volume(float h, float r)
{
    return (3.14*r*r*h);
}

float Cuboid::volume(float a, float b, float c)
{
    return (a*b*c);
}
int main()
{
    Cube cube;
    Cylinder cylinder;
    Cuboid cuboid;
    int l,b,h,a,r;
    cout<<"Cube:\n";
    cout<<"Length: ";
    cin>>a;
    cout<<"volume"<<cube.volume(a)<<"\n";

    cout<<"Cylinder:\n";
    cout<<"Length: ";
    cin>>l;
    cout<<"Radius: ";
    cin>>r;
    cout<<"volume"<<cylinder.volume(l,r)<<"\n";

    cout<<"Cuboid:\n";
    cout<<"Length: ";
    cin>>l;
    cout<<"Breadth: ";
    cin>>b;
    cout<<"Height: ";
    cin>>h;
    cout<<"volume"<<cuboid.volume(l,b,h)<<"\n";

    return 0;
}

