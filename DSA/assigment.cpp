#include <iostream>
using namespace std;

int main()
{
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    int n, c, ni, in, pos, t, del, an;
    cout << "Enter no of elements" << endl;
    cin >> n;
    int arr[n];

    for (int u = 1; u > 0; u++)
    {
        an = n + count3 - count4;

        cout << endl
             << "Menu : 1.CREATE" << endl
             << "       2.DISPLAY" << endl
             << "       3.INSERT" << endl
             << "       4.DELETE" << endl
             << "       5.SEARCH" << endl
             << "       6.EXIT" << endl;
        cout << "Enter your choice" << endl;
        cin >> c;

        switch (c)
        {
        case 1:
        {

            cout << "Enter elements" << endl;
            for (int i = 0; i < an; i++)
            {
                cin >> arr[i];
            }
            count1++;
            continue;
        }

        case 2:
        {
            if (count1 == 0)
            {
                cout << "Array not created" << endl;
            }
            else
            {
                for (int i = 0; i < an; i++)
                {
                    cout << arr[i] << " ";
                }
            }
            count2++;
            continue;
        }

        case 3:
        {
            if (count1 == 0)
            {
                cout << "Array not created" << endl;
            }
            else
            {
                cout << endl
                     << "Enter element to be inserted" << endl;
                cin >> in;
                cout << "Enter position" << endl;
                cin >> pos;
                t = pos - 1;
                for (int i = an; i >= 0; i--)
                {
                    if (i != t)
                    {
                        arr[i] = arr[i - 1];
                    }
                    else
                    {
                        arr[i] = in;
                        break;
                    }
                }
                cout << "New array : " << endl;
                for (int i = 0; i < an + 1; i++)
                {
                    cout << arr[i] << " ";
                }
                count3++;
            }
            continue;
        }

        case 4:
        {
            // int len = sizeof(arr) / sizeof(int);
            if (count1 == 0)
            {
                cout << "Array not created" << endl;
            }
            else
            {
                cout << endl
                     << "Enter position to be deleted" << endl;
                cin >> del;
                for (int i = 0; i < an; i++)
                {
                    if (i == (del - 1))
                    {
                        for (int j = (del - 1); j < an; j++)
                        {
                            arr[j] = arr[j + 1];
                        }
                    }
                }
                cout << "New array : " << endl;
                for (int i = 0; i < an - 1; i++)
                {
                    cout << arr[i] << " ";
                }
                count4++;
            }
            continue;
        }

        case 5:
        {
            if (count1 == 0)
            {
                cout << "Array not created" << endl;
            }
            else
            {
                int sr, ch = 0;
                cout << endl
                     << "Enter element to search" << endl;
                cin >> sr;
                for (int i = 0; i < an; i++)
                {
                    if (arr[i] == sr)
                    {
                        cout << "Found at " << (i + 1) << " position" << endl;
                        ch++;
                    }
                }
                if (ch == 0)
                {
                    cout << "Not found" << endl;
                }
                count5++;
            }
            continue;
        }

        case 6:
        {
            cout << endl
                 << "Exiting program" << endl;
            return 0;
        }

        default:
        {
            cout << "Invalid choice" << endl;
            continue;
        }
        }
    }
}


#include <iostream>
using namespace std;
int missing_number(int arr[], int n)
{
     int x = 0, y = n - 1;
     int midno;
     while ((y - x) > 1)
     {
          midno= (x + y) / 2;
          if ((arr[x] - x) != (arr[midno] - midno))
               y = midno;
          else if ((arr[y] - y) != (arr[midno] - midno))
               x = midno;
     }
     return (arr[x] + 1);
}

int main()
{
     int arr[] = {1, 2, 3, 4, 5, 6, 8};
     int n = sizeof(arr) / sizeof(arr[0]);
     cout << "Missing number:" << missing_number(arr, n);
}

