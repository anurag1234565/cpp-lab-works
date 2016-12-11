#include<iostream>
#include<math.h>
using namespace std;

class Point
{
  private:
    int x,y,z;
  public:
    void assign(int a, int b, int c)
    {
      x = a;
      y = b;
      z = c;
    }

    void distance()
    {
      cout << "Distance from origin=" << sqrt((x*x + y*y + z*z)) << endl;

    }
};

int main()
{
  Point p;
  p.assign(0,4,3);
  p.distance();
  return 0;
}
