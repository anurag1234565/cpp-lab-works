#include<iostream>
using namespace std;

void area(int l)
{
  cout << endl << l*l ;
}

void area(int l, int b)
{
  cout << endl << l*b;
}

void area(float r, int l)
{
  cout << endl << 3.14 * r * l; 
}

int main()
{
  cout << "Area of square of length 7" ;
  area(7);
  cout << "Area of rectangle of length 7 and breadth 8";
  area(7,8);
  cout << "Area of cylinder of length 8 and radius 3.5";
  area(3.5,8);
  return 0;
}
