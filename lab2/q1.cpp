#include<iostream>
using namespace std;

class Rational
{
  private:
    int num,den;
  public:
    void assign(int, int);
    void convert();
    void print();
    void invert();
};

void Rational :: assign ( int n, int d)
{
  num = n;
  den = d;
}

void Rational :: convert()
{
  cout << (float)num / den << endl;
}

void Rational :: print()
{
  cout << num <<"/" << den << endl;
}

void Rational :: invert()
{
  int temp;
  temp = num;
  num = den;
  den = temp;
}

int main()
{
  Rational x;
  x.assign(22,7);
  x.print();
  x.convert();
  x.invert();
  x.print();
  x.convert();
  return 0;
}
