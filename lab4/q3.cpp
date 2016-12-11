#include<iostream>
using namespace std;

class Complex
{
  private:
    int r,i;
  public:
    Complex(){};
    Complex(int a, int b)
    {
      r = a;
      i = b;
    }

    Complex operator *(Complex c)
    {
      Complex c1(((r*c.r)-(i*c.i)),((r*c.i+i*c.r)));
      return c;
    }

    void show()
    {
      cout << r << " + i" <<i <<endl;
    }
};

int main()
{
  Complex c1(4,5),c2(1,2),c3;
  c3 = c1 * c2;
  c3.show();
}
