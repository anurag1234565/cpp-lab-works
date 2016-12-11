#include<iostream>
using namespace std;

class Counter
{
  private:
    int count;
  public:
    Counter()
    {
      count = 0;
    }

    void operator ++()//prefix
    {
      ++count;
    }

    void operator --()//prefix
    {
      --count;
    }

    void operator ++(int)//postfix
    {
      count++;
    }

    void operator --(int)//postfix
    {
      count--;
    }

    void show()
    {
      cout << count << endl;
    }
};

int main()
{
  Counter c;
  c++;
  c.show();
  ++c;
  c.show();
  c--;
  c.show();
  --c;
  c.show();
  return 0;
}
