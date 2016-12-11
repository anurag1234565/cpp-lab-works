#include<iostream>
using namespace std;

class MiniComplex;
class FriendComplex;

class Complex
{
  protected:
    int real, img;
  public:
    Complex(int a , int b)
    {
      real = a;
      img = b;
    }

    void show()
    {
      cout << real << "+ i"<< img;
    }

    int getReal()
    {
      return real;
    }

    int getImg()
    {
      return img;
    }
};

class MiniComplex:public Complex
{
  private:
    friend class FriendComplex;
  public:
    MiniComplex(int a, int b):Complex(a , b){};
    void add(Complex c)
    {
      real = real + c.getReal();
      img = img + c.getImg();
    }
};

class FriendComplex:public Complex
{
  public:
    FriendComplex(int a=0, int b=0):Complex(a,b){};
    void substract(Complex c, MiniComplex m)
    {
      real = c.getReal() - m.real;
      img = c.getImg() - m.img;
    }
};

int main()
{
  Complex c(8,10);
  MiniComplex m(6,7);
  FriendComplex f;
  cout <<"c =";
  c.show();
  cout <<endl << "m = ";
  m.show();
  f.substract(c,m);
  cout << endl << "c - m=";
  f.show();
  m.add(c);
  cout <<endl << "c + m= ";
  m.show();
  cout << endl;
}
