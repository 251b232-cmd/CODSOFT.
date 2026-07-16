#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr[20];
    int n = 0;
    int ch, d;

    do
    {
        cout << "\n----- TO DO LIST -----\n";
        cout << "1. Add Task\n";
        cout << "2. View Task\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> ch;
        cin.ignore();

        if (ch == 1)
        {
            if (n == 20)
            {
                cout << "Task List is Full!\n";
            }
            else
            {
                cout << "Enter Task: ";
                getline(cin, arr[n]);
                n++;
                cout << "Task Added Successfully!\n";
            }
        }
        else if (ch == 2)
        {
            if (n == 0)
            {
                cout << "No Task Found!\n";
            }
            else
            {
                cout << "\n----- TASKS -----\n";
                for (int i = 0; i < n; i++)
                {
                    cout << i + 1 << ". " << arr[i] << endl;
                }
            }
        }
        else if (ch == 3)
        {
            if (n == 0)
            {
                cout << "No Task to Delete!\n";
            }
            else
            {
                cout << "Enter Task Number: ";
                cin >> d;

                if (d >= 1 && d <= n)
                {
                    for (int i = d - 1; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    n--;
                    cout << "Task Deleted Successfully!\n";
                }
                else
                {
                    cout << "Invalid Task Number!\n";
                }
            }
        }
        else if (ch == 4)
        {
            cout << "Thank You!\n";
        }
        else
        {
            cout << "Invalid Choice!\n";
        }

    } while (ch != 4);

    return 0;
}
