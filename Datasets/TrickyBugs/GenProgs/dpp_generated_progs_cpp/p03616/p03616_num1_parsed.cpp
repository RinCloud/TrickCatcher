#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int X;
    cin >> X;

    int K;
    cin >> K;

    vector<int> r(K);
    for (int i = 0; i < K; i++)
    {
        cin >> r[i];
    }

    int Q;
    cin >> Q;

    vector<pair<int, int>> queries(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> queries[i].first >> queries[i].second;
    }

    // Calculate the amount of sand in bulb A at each time r_i
    vector<long long> sandInA(K + 1);
    sandInA[0] = X;

    for (int i = 1; i <= K; i++)
    {
        sandInA[i] = X - sandInA[i - 1];
    }

    // Answer each query
    for (int i = 0; i < Q; i++)
    {
        int t = queries[i].first;
        int a = queries[i].second;

        // Find the index of the last r value that is less than or equal to t
        int index = 0;
        while (index < K && r[index] <= t)
        {
            index++;
        }

        // Calculate the amount of sand in bulb A at time t
        long long result = 0;

        if (index % 2 == 0)
        {
            result = (long long)a + (t - r[index - 1]);
        }
        else
        {
            result = (long long)a - (t - r[index - 1]);
        }

        // Output the result
        cout << result << endl;
    }

    return 0;
}