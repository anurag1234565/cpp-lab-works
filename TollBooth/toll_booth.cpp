/*Toll Booth Collecter that adds rs 5 per car*/
#include<iostream>
using namespace std;

class TollBooth
{
  private:
    unsigned int noOfCars;
    double moneyCollected;

  public:
    TollBooth()
    {
      noOfCars = 0;
      moneyCollected = 0;
    }

    void payingCar()
    {
      noOfCars++;
      moneyCollected += 5;
    }

    void noPayCar()
    {
      noOfCars++;
    }

    void display()
    {
      cout << "No. Of Cars =" << noOfCars << endl << "Money Collected = Rs." << moneyCollected << endl;
    }
};

int main_menu()
{
  int a;
  cout << "1.Paying Car" << endl <<"2.Non Paying Car" << endl << "3.View" << endl << "4.Exit"<< endl << endl;
  cin >> a;
  cin.ignore();
  return a;
}

int main()
{
   TollBooth t;

  for(;;)
  {
    std :: system("clear");
    int b = main_menu();
    switch(b)
    {
      case 1:
        t.payingCar();
        break;

      case 2:
        t.noPayCar();
        break;

      case 3:
        t.display();
        break;

      case 4:
        exit(0);
        break;

      default:
        cout << "Invalid Option";
    }

    cin.ignore().get();
  }
  return 0;
}
