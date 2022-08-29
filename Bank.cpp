#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct Account
{

    int accNo;
    string accName;
    float balance;

} acc;

float amount(string s)
{
    int amt;
    cout << endl
         << "enter the amount to be " << s << ": ";
    cin >> amt;
    return amt;
}

int validateAccount(string s)
{

    int acNo;
    cout << endl
         << "Enter the account number for " << s << ": ";
    cin >> acNo;
    return acNo;
}

int searchIndex(int acNo, vector<acc> accounts)
{

    int i = 0;
    for (auto element : accounts)
    {
        if (element.accNo == acNo)
        {
            return i;
        }
        else
            i += 1;
    }
    return -1;
}
class Bank
{

    acc account;

    vector<acc> accounts;

public:
    void openAccount(int, string, float);
    void showAccount();
    void Deposit();
    void Withdrawal();
    void search();
};

void Bank ::openAccount(int acNo, string name, float amt)
{

    account.accNo = acNo;
    account.accName = name;
    account.balance = amt;
    accounts.push_back(account);
    cout << endl
         << "****Account opened successfully!****" << endl;
}

void Bank ::showAccount()
{

    for (auto element : accounts)
    {
        cout << endl
             << "Account no: " << element.accNo << endl;
        cout << "Name: " << element.accName << endl;
        cout << "Account Balance: " << element.balance << endl;
    }
}

void Bank ::Deposit()
{

    int acNo;
    float amt;
    int index;

    acNo = validateAccount("Deposit");
    index = searchIndex(acNo, accounts);
    
    if (index==-1)
        cout<<endl<<"****Account not found...****"<<endl;
    else{
        amt = amount("Deposit");

        accounts[index].balance += amt;
        cout << endl
            << "****Amount deposited successfully!****" << endl;
    }
}

void Bank ::Withdrawal()
{
    int acNo;
    float amt;
    int index;
    acNo = validateAccount("Withdrawal");

    index = searchIndex(acNo, accounts);
    if (index==-1)
        cout<<endl<<"****Account not found...****"<<endl;
    else{
        amt = amount("withdraw");
        if (amt > accounts[index].balance)
        {
            cout << "****Insufficient balance****" << endl;
            exit(1);
        }
        else
            accounts[index].balance -= amt;
        cout << endl
            << "****Money withdrawn successfully****" << endl;
    }
}

void Bank ::search()
{
    int index;
    int acNo;
    cout << "Enter account number: ";
    cin >> acNo;
    index = searchIndex(acNo, accounts);
    if (index + 1)
    {
        cout << endl
             << "****Account found ****" << endl;
        cout << "Account number: " << accounts[index].accNo << endl
             << "Name: " << accounts[index].accName << endl
             << "Account balance: " << accounts[index].balance << endl;
    }
    else
        cout << "****Account not found****" << endl;
}

int main()
{
    int acNo;
    string name;
    float amt;
    int choice;
    Bank bank;
    while (1)
    {

        cout << endl
             << "1. Open a Account" << endl
             << "2. Show Accounts" << endl
             << "3. Deposit" << endl
             << "4. Withdraw" << endl
             << "5. Search Account" << endl
             << "6. Exit" << endl;

        cout << endl
             << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:

            acNo = rand() % 10000;
            cout << endl
                 << "Enter Name: ";
            cin.get();
            getline(cin, name);
            cout << endl
                 << "Enter opening balance: ";
            cin >> amt;
            bank.openAccount(acNo, name, amt);
            break;

        case 2:
            bank.showAccount();
            break;

        case 3:

            bank.Deposit();
            break;

        case 4:
            bank.Withdrawal();
            break;

        case 5:
            bank.search();
            break;

        case 6:

            exit(0);

        default:

            cout << endl
                 << "Invalid choice! Try again" << endl;
        }
    }
}
