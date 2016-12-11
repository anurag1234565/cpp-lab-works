#include<iostream>
#include<string.h>
using namespace std;

struct Phone
{
  int area;
  int  exchange;
  int  number;

};

void display(Phone p)
{
  cout <<"("<<p.area<<") "<<p.exchange<<"-"<<p.number;
}

int main()
{
  Phone my,your;
  my.area = 980;
  my.exchange=950;
  my.number = 7803;
  cout << " Please give me your number (-_-)"<<endl;
  cin >> your.area >> your.exchange >> your.number;
  cout<<endl<<"My number is ";
  display(my);
  cout <<endl<<"Your number is";
  display(your);
  cout <<endl;
  return 0;
}
