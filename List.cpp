#include <iostream>
#include <list>

using namespace std;

int main()
{
    int i, ele, choice;

    list<int> lst;
    list<int>::iterator iter;

    while (1)
    {

        cout << endl
             << "1. Insert elements to the list" << endl
             << "2. Delete elements from the list" << endl
             << "3. Display list" << endl
             << "4. Exit" << endl;

        cout << endl
             << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:

            int size;
            cout << endl
                 << "How many elements: ";
            cin >> size;
            i = 0;
            while (i < size)
            {
                cout << endl
                     << "1.Enter element to beginning of list" << endl
                     << "2.Enter element to the end of list" << endl;

                cout << endl
                     << "Enter your choice: ";
                cin >> choice;

                cout << endl
                     << "Enter the element: ";
                cin >> ele;

                switch (choice)
                {

                case 1:
                    lst.push_front(ele);
                    i++;
                    break;

                case 2:
                    lst.push_back(ele);
                    i++;
                    break;

                default:
                    cout << endl
                         << "Invalid choice" << endl;
                    break;
                }
            }

            cout << endl
                 << "Elements inserted successfully" << endl;

            break;

        case 2:

            int index;
            cout << endl
                 << "1.Delete element to beginning of list" << endl
                 << "2.Delete element to the end of list" << endl;

            cout << endl
                 << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {

            case 1:
                lst.pop_front();
                break;

            case 2:
                lst.pop_back();
                break;

            default:
                cout << endl
                     << "Invalid choice" << endl;
                break;
            }

            cout << endl
                 << "Element deleted successfully." << endl;
            break;

        case 3:

            cout << endl
                 << "Elements in list are: ";
            for (iter = lst.begin(); iter != lst.end(); iter++)
                cout << *iter << "  ";
            cout << endl;
            break;

        case 4:

            cout << "..." << endl;
            exit(0);

        default:

            cout << "Invalid choice...Try again!" << endl;
        }
    }
}
