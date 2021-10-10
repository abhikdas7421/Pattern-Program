#include <iostream>
using namespace std;

int main()
{
    //Program to print pyramid pattern for numbers - 2
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}