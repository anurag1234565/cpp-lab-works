#include<iostream>
using namespace std;

class Circle
{
  private:
    float radius;
  public:
    Circle(float a)
    {
      radius = a;
    }

    void area()
    {
      cout << "Area: " << 3.14 * radius * radius << endl;
    }

    void perimeter()
    {
      cout << "Perimeter: " << 2 * 3.14 * radius<< endl;
    }
};

int main()
{
  Circle c(3.0);
  c.area();
  c.perimeter();
}
