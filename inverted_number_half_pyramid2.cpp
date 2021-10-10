#include <iostream>
using namespace std;

int main()
{
    //Program to print inverted half pyramid using numbers - 2
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}