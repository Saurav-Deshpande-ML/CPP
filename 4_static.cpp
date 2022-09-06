#include <iostream>
#include <string>

using namespace std;

class Library
{

    static int book_count;
    int book_id;
    string book_name;

public:
    Library(int id, string name)
    {

        book_id = id;
        book_name = name;
        book_count++;
    }

    void displayBooks(void);

    static void getBookCount(void)
    {
        cout << "Total books in library: " << book_count << endl;
    }
};

void Library ::displayBooks()
{

    cout << endl
         << "Book Details: " << endl;
    cout << "Book ID -> " << book_id << endl;
    cout << "Book Name -> " << book_name << endl;
}

int Library ::book_count;

int main()
{

    Library lib1(1, "Harry Potter");
    lib1.displayBooks();
    Library ::getBookCount();

    Library lib2(2, "Gone Girl");
    lib2.displayBooks();
    Library ::getBookCount();
}
