#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    int b[100005];
    int i = 0, j = 0;
    int t = 0;
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(b, b + n, cmp);

    long long sum = 0;
    for (i = 1; i + 1 < n && sum == 0; i++)
    {
        if (b[i] == b[i - 1])
        {
            sum = (long long)b[i] * b[i - 1];
            i++;
            t++;
        }
    }

    if (t != 2)
        sum = 0;

    cout << sum << endl;

    return 0;
}
