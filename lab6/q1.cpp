/*musicians:Instruments*/
#include<iostream>
using namespace std;
class Musicians
{
  protected:
    char const *string[4];
    char const *wind[4];
    char const *perc[5];
  public:
    Musicians(){
    }
    void string_instruments()
    {
      string[0] = "veena";
      string[1] = "sitar";
      string[2] = "sarod";
      string[3] = "mandolin";
    }
     void wind_instruments()
    {
      wind[0] = "flute";
      wind[1] = "clarinet saxophone";
      wind[2] = "nadhaswaram";
      wind[3] = "piccolo";
    }

    void perc_instruments()
    {
      perc[0] = "tabla";
      perc[1] = "mridangam";
      perc[2] = "bangos";
      perc[3] = "drums";
      perc[4] = "tambour";
    }
};

class Instruments : public Musicians
{
  public:
    Instruments()
    {
      string_instruments();
      perc_instruments();
      wind_instruments();
    }
    char get()
    { 
      char choice;
      cout << "\na.String Instruments\nb.Wind Instruments\nc.Percussion Instruments\n";
      cin >> choice;
      return choice;
    }

    void show(char choice)
    {
      switch(choice)
      {
        case('a'):
          for(int i=0;i<=3;i++)
           cout << string[i]<<"\n";
         break;
        case('b'):
         for(int i=0;i<=3;i++)
           cout << wind[i]<<"\n";
         break;
        case('c'):
         for(int i=0;i<=4;i++)
           cout << perc[i]<<"\n";
      }
    }
};

int main()
{
  Instruments i;
  i.show(i.get());
  return 0;
}
