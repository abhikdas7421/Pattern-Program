#include <iostream>
using namespace std;

int main()
{
    //Program to print palindromic pattern
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1, count = i; j < i; j++, count--)
        {
            cout << count << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}