#include <iostream>
using namespace std;

int main()
{
    //Program to print hollow diamond using stars
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j < i; j++)
        {
            if (j == 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
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
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            if (j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = i; j <= n; j++)
        {
            if (j == n)
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