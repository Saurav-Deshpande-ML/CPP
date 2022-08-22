#include <iostream>

using namespace std;

class Bank
{

    int accNo;
    float accBalance;

public:
    Bank(int accNo, float accBalance)
    {

        this->accNo = accNo;
        this->accBalance = accBalance;
    }

    void displayAccountDetails() const;
};

void Bank ::displayAccountDetails() const
{

    //accNo+=10;
    cout << endl
         << "Account Details: " << endl;
    cout << "Account Number: " << accNo << endl;
    cout << "Total balance in Account: " << accBalance << endl;
}

int main()
{

    Bank account1(1000, 50000);
    account1.displayAccountDetails();

    Bank account2(1001, 20000);
    account2.displayAccountDetails();
}
