#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long sccGroups = 0;

    if (n <= m / 2)
    {
        sccGroups = n;
    }
    else
    {
        sccGroups = m / 2;
        long long remainingS = n - m / 2;
        sccGroups += remainingS / 4;
    }
    
    cout << sccGroups << endl;

    return 0;
}
