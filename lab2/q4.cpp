#include<iostream>
using namespace std;

class Person
{
  private:
    char name[20];
    int age;
    char gender;
    long mob;
 public:
    void assign()
    {
      cout << "Name: ";
      cin.getline(name,sizeof(name));
      cin.ignore();
      cout << "Age: ";
      cin >> age;
      cin.ignore();
      cout << "Gender [m/f]";
      cin >> gender;
      cin.ignore();
      cout << "Mob No.:";
      cin >> mob;
    }

    void display()
    {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << "Gender: " << gender << endl;
      cout << "Mob no.: " << mob <<endl;
    }
};

int main()
{
  Person p;
  p.assign();
  p.display();
  return 0;
}
