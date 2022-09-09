#include <iostream>
#include <regex>

using namespace std;

int main()
{

    string str;
    while (true)
    {
        cout << endl
             << "Enter string : ";
        cin >> str;

        regex e("abc");
        // regex e("abc", regex_constants::icase);
        // regex e("abc.");
        // regex e("abc.?");
        // regex e("ab[cd]");
        // regex e("ab[^cd]");
        // regex e("ab[cd]{3}");
        // regex e("ab[cd]{3}");
        // regex e("abc|[de]fg");
        // regex e("(abc)de+\\1");
        // regex e("[[:w:]]+@[[:w:]]+\.com");

        bool match = regex_match(str, e);
        // bool match = regex_search(str, e);

        cout << (match ? "Matched" : "Not matched") << endl;
    }
}
