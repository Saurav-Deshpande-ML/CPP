#include <iostream>
#include <regex>

using namespace std;

int main()
{

    string str = "abc@gmail.com      def@yahoo.com      xyx@123.com";

    smatch sm;
    regex e("([[:w:]]+)@([[:w:]]+)\.com");

    sregex_iterator pos(str.cbegin(), str.cend(), e);
    sregex_iterator end;

    bool match = regex_search(str, sm, e);
    cout << "matched: " << sm.size() << endl;
    for (; pos != end; pos++)
    {
        cout << "Email ID : " << pos->str(0) << endl;
        cout << "Username : " << pos->str(1) << endl;
        cout << "Domain : " << pos->str(2) << endl;
        cout << endl;
    }
}
