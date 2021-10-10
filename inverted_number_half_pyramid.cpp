#include <iostream>
using namespace std;

int main()
{
    //Program to print inverted half pyramid using numbers
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i, count = 1; j <= n; j++, count++)
        {
            cout << count << " ";
        }

        cout << endl;
    }

    return 0;
}