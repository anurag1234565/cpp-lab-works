//A program using function to calculate square of a number.
#include<iostream>
using namespace std;

class Number
{
    int square;
    public:
       inline void findSquare(int number)
        {
            square = number * number;
            cout<<"Square:"<<square<<"\n";
        }
};

int main()
{
    Number num1;
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    num1.findSquare(num);
    return 0;
}

