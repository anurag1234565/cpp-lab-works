#include<iostream>
using namespace std;

class Person
{
  protected:
    char  name[50];
    int age;
  public:
    void put()
    {
      cout << "Name: " ;
      cin.getline(this->name, sizeof(name));
      cin.ignore();
      cout << "age:"; 
      cin >> this->age;
      cin.ignore();
    }

    void showit()
    {
      cout << "Name: " << this->name <<endl;
      cout << "age: " << this->age <<endl;
    }
};

class Student : public Person
{
  private:
    char level[20];
    char faculty[30];
  public:
    void set()
    {
      put();
      cout << "Level";
      cin.getline(level, sizeof(level));
      cin.ignore();
      cout << "faculty";
      cin.getline(faculty, sizeof(faculty));
      cin.ignore();
    }

    void address()
    {
      cout <<"address of student" << this << endl;
    }

    void show()
    {
      showit();
      cout << "Level:" << level;
      cout << "Faculty: " << faculty; 
    }
};

class Employee : public Person
{
    private:
      char post[20];
      int salary;
    public:
      void set()
      {
         put();
         cin.ignore();
         cout << "Post";
         cin.getline(post, sizeof(post));
         cin.ignore();
         cout << "Salary";
         cin >> salary;
         cin.ignore();
      }

      void address()
      {
         cout <<"address of employee" << this << endl;
      }
      void show()
      {
         showit();
         cout << "Post:" << post;
         cout << "Salary: " << salary;
      }
};



int main()
{
  Student s;
  Employee e;
  s.set();
  e.set();
  s.address();
  s.show();
  e.address();
  e.show();
}
