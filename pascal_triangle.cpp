#include <iostream>
using namespace std;

int fac(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int coeff(int n, int r)
{
    int ans = fac(n) / (fac(r) * fac(n - r));
    return ans;
}
int main()
{
    //Program to print pascal triangle
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << coeff(i, j) << " ";
        }

        cout << endl;
    }

    return 0;
}