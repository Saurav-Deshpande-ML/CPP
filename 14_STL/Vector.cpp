#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, ele, choice;

    vector<int> vec1;
    vector<int>::iterator iter;

    while (1)
    {

        cout << endl
             << "1. Insert elements to the vector" << endl
             << "2. Delete elements from the vector" << endl
             << "3. Display vector" << endl
             << "4. Display size and capacity" << endl
             << "5. Exit" << endl;

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
                cout << "Enter element " << ++i << ": ";
                cin >> ele;
                vec1.push_back(ele);
            }

            cout << endl
                 << "Elements inserted successfully" << endl;

            break;

        case 2:
            int index;
            cout << endl
                 << "Enter index from which element has to be deleted: ";
            cin >> index;
            if (index > vec1.size())
            {
                cout << endl
                     << "Invalid Index" << endl;
                break;
            }
            vec1.erase(vec1.begin() + (index - 1));
            cout << endl
                 << "Element at index " << index << " deleted successfully." << endl;
            break;

        case 3:

            cout << endl
                 << "Elements in vector are: ";
            for (iter = vec1.begin(); iter < vec1.end(); iter++)
                cout << *iter << "  ";
            cout << endl;
            break;

        case 4:

            cout << endl
                 << "Size= " << vec1.size() << endl
                 << "Capacity= " << vec1.capacity() << endl;
            break;

        case 5:

            cout << "..." << endl;
            exit(0);

        default:

            cout << "Invalid choice...Try again!" << endl;
        }
    }
}
