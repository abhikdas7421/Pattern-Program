#include <iostream>
using namespace std;

int main()
{
    //Program to print hollow butterfly pattern
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (j == i || j == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++)
        {
            if (j == i || j == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}