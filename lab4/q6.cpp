#include<iostream>
#include<string.h>
using namespace std;

class String
{
  private:
    char a[100];
  public:
    String(){ strcpy(a,"");}
    String(char* b)
    {
      strcpy(a,b);
    }
    
    String operator +(String b)
    {
      String s(a);
      strcat(s.a,b.a);
      return s;
    }

    void operator +=(String b)
    {
      strcat(a,b.a);
    }

    void show()
    {
      cout << a <<endl;
    }
};

int main()
{
  String s1("Hello"),s2("Nepal"),s3;
  s3 = s1 + s2;
  s1 += s2;
  s3.show();
  s1.show();
  return 0; 
}

