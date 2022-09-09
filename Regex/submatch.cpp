#include <iostream>
#include <regex>

using namespace std;

int main()
{

    string str;
    while (true)
    {
        cout << "enter Email ID: ";
        cin >> str;

        smatch sm;
        regex e("([[:w:]]+)@([[:w:]]+)\.com");
        bool match = regex_search(str, sm, e);
        if (match)
        {
            cout << "Valid Email ID: " << endl;
            cout << "Matched: " << sm.size() << endl;
            cout << "Email ID: " << sm[0] << endl;
            cout << "Username: " << sm[1] << endl;
            cout << "Domain: " << sm[2] << endl;
        }
        else
        {
            cout << "Not a valid Email ID" << endl;
        }
    }
}
