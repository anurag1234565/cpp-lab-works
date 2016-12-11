#include<iostream>
using namespace std;

class Time
{
  private:
    int h,m;
  public:
    Time(int hh,int mm)
    {
      h = mm/60 + hh;
      m = mm%60;
    }

    Time operator +(Time t)
    {
      int mm = (m + t.m);
      int hh = mm/60;
      hh += h + t.h;
      mm = mm%60;
      Time tt(hh,mm);
      return tt; 
    }

    void show()
    {
      cout << h << " : "<<m; 
    }
};

int main()
{
  Time t1(1,30),t2(2,20);
  Time t3 = t1 + t2;
  t3.show();
  return 0;
}
