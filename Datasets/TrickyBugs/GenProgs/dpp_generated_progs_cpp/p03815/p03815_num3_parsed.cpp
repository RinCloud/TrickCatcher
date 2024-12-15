#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long x;
    cin >> x;

    // If x is less than or equal to 6, the minimum number of operations needed is 1.
    if (x <= 6)
    {
        cout << "1" << endl;
        return 0;
    }

    // Calculate the maximum achievable points with 6 operations
    long long maxPoints = 6 * (x / 6);

    // Calculate the remaining points after achieving the maximum points with 6 operations
    long long remainingPoints = x % 6;

    // Calculate the minimum number of operations needed
    long long minOperations = ceil((double)remainingPoints / 2);

    // Add the number of operations needed to achieve the maximum points with 6 operations
    minOperations += (x / 6 - 1) * 3;

    // If the remaining points are odd, it will take an additional operation
    if (remainingPoints % 2 != 0)
    {
        minOperations++;
    }

    cout << minOperations << endl;

    return 0;
}