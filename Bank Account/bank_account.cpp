/*
 Define a class to represent a bank account. Include the following members:
  Data members:
    i)  Name of account holder.
    ii) Account number.
    iv) Balance Amount in the account.

  Member functions:
    i)   Open an account
    ii)  Deposit and withdraw money
    iii) Display account information

*/

#include<iostream>
using namespace std;

class Account
{
  private:
    char name[20];
    int acc_no;
    double balance;

  public:
    static int no;
    Account()
    {
      balance = 0;
    }

    void openAccount() //to create an account
    {
      std :: system("clear"); //clearing screen
      cout << endl << "----- Thank you for choosing our service ----"<< endl << endl;
      cout << "Please fill up the details" << endl; 
      cin.ignore();
      cout <<"Name: ";
      cin.getline( name, sizeof(name));  //for getting line input 

      no ++; //increasing number of account;
      acc_no = no;
      
      cout << endl << "Congratulations! Your account has sucessfully been created.\nYour account number is " << acc_no << ". Remember this for future transactions.\nThank you!" << endl;
      cin.get();
    }

    void deposit() // for credit the balance
    {
      double a;
      std :: system("clear");
      cin.ignore();
      cout << endl << "---------- CASH DEPOSIT -----------" << endl;
      cout << "Amount:";
      cin  >> a;
      balance += a;
      cout << endl << "Balance Credited! Your new balance is Rs" << balance << endl;
      cin.ignore().get();
    }

    void withdraw()
    {
      double a;
      std :: system("clear");
      cin.ignore();
      cout << endl << "--------- WITHDRAWAL --------" << endl;
      cout << "Amount: ";
      cin >> a;
      if(a > balance)
        cout << "Sorry, Balance is not enough.\n Request rejected!" << endl ;
      else
      {
        balance -= a;
        cout << "Transaction Complete! Your new balance is Rs." << balance << endl;
      }
      cin.ignore().get();
    }

    void info()
    {
      std :: system("clear");
      cout << endl << "---------- INFO --------" << endl;
      cout << "Name: "<< name << endl;
      cout << "Account No." << acc_no << endl;
      cout << "Balance Rs." << balance << endl;
      cin.ignore().get();
    }
}a[10];

int Account :: no ;

int mainMenu() //Displays main menu and returns the selection
{
  int option;
  std :: system("clear");
  cout << endl << " --------- MAIN MENU -------" << endl;
  cout << "Please choose an option" << endl;
  cout << "1. Open new Account." << endl;
  cout << "2. Deposit Money." << endl;
  cout << "3. Withdraw Money." << endl;
  cout << "4. Get Information" << endl;
  cout << "5. Exit" << endl;
  
  do
  {
    cin >> option;
    if(option > 5 || option < 1)
    {
      cout << "Invalid Option" << endl;
      cin.ignore();
    }
    else
      return option;
  }while( option > 5 || option < 1 );
}

int prompt() //ask user their account number
{
  int acn;
  int acno = Account :: no ;
  std :: system("clear");
  cout << endl << "Account No.: ";
  cin >> acn;
  cout <<"ACCOUNT NO: "<< acn ;
  if( (acn <= acno) && (acn > 0))
    return acn;
  else
    cout << "Invalid Account Number" << endl;
    cin.ignore().get();
    return prompt();
}

void eventHandler(int o) //handles events from main menu
{
  int noOfAccounts = Account :: no;
  switch(o)
  {
    case 1:
      a[noOfAccounts].openAccount();
      break;
    case 2:
      a[prompt()-1].deposit();
      break;
    case 3:
      a[prompt()-1].withdraw();
      break;
    case 4:
      a[prompt()-1].info();
      break;
    case 5:
      exit(0);
      break;
    default:
      cout << "Invalid" << endl ;
  }
}

int main()
{
  for(;;)
   eventHandler(mainMenu());
  
  return 0;
}
