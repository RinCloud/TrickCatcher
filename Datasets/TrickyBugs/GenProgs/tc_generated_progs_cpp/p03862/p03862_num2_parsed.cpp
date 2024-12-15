#include <iostream>
using namespace std;
int main()
{
    long long n, x, m = 0, z, y;
    cin >> n >> x;
    int a[n];
    a[n] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        z = a[i] + a[i + 1] - x;
        if (z > 0)
        {
            m += z;
            if (a[i + 1] < z)
            {
                a[i + 1] = 0;
            }
            else
            {
                a[i + 1] = a[i + 1] - z;
            }
        }
    }
    if (a[n - 1] + a[n - 2] - x > 0)
        m += a[n - 1] + a[n - 2] - x;
    cout << m << endl;
    return 0;
}