#include <iostream>
#include <cmath>

using namespace std;

bool canWithdraw(int n, int base)
{
    while (n > 0)
    {
        int digit = n % base;
        if (digit != 1 && digit != 0 && digit != base - 1)
        {
            return false;
        }
        n /= base;
    }
    return true;
}

int minWithdrawOperations(int n)
{
    int result = n;
    for (int i = 1; i <= sqrt(n) + 1; i++)
    {
        if (canWithdraw(n, i))
        {
            int num_operations = 0;
            int temp = n;
            while (temp > 0)
            {
                int digit = temp % i;
                num_operations += digit;
                temp /= i;
            }
            result = min(result, num_operations);
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << minWithdrawOperations(n) << endl;
    return 0;
}