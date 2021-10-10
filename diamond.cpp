#include <iostream>
using namespace std;

int main()
{
    //Program to print diamond using stars: Given n, print diamond with 2*n rows.
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
            cout << "* ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
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
            cout << "* ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}