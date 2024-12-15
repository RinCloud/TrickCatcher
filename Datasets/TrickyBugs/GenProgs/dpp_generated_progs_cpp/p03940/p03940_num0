#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int N, E, T;
    cin >> N >> E >> T;

    vector<int> x(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }

    int minTime = INT_MAX;
    int totalTime = 0;

    for (int i = 0; i < N; i++)
    {
        int time = 0;
        int candyCount = 0;
        int currentPosition = 0;

        for (int j = i; j < N; j++)
        {
            if (x[j] - currentPosition <= E)
            {
                time += x[j] - currentPosition + T;
                currentPosition = x[j];

                candyCount++;

                if (candyCount == N)
                {
                    minTime = min(minTime, time + E - currentPosition);
                    break;
                }
            }
            else
            {
                break;
            }
        }
    }

    cout << minTime << endl;

    return 0;
}