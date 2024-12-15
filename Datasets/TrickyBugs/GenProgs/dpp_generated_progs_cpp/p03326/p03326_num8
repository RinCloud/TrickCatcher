#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long calc_score(int n, int m, vector<vector<long long>>& cakes)
{
    long long max_score = 0;
    
    // Generate all possible combinations of cakes using bitmasking
    for (int mask = 0; mask < (1 << n); mask++)
    {
        vector<long long> total_sum(3, 0);
        
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                count++;
                for (int j = 0; j < 3; j++)
                {
                    total_sum[j] += cakes[i][j];
                }
            }
        }
        
        // Check if the number of chosen cakes is equal to M
        if (count == m)
        {
            // Calculate the score based on the absolute sum of the total beauty, tastiness, and popularity
            long long score = abs(total_sum[0]) + abs(total_sum[1]) + abs(total_sum[2]);
            max_score = max(max_score, score);
        }
    }
    
    return max_score;
}

int main()
{
    int N, M;
    cin >> N >> M;
    
    vector<vector<long long>> cakes(N, vector<long long>(3));
    for (int i = 0; i < N; i++)
    {
        cin >> cakes[i][0] >> cakes[i][1] >> cakes[i][2];
    }
    
    long long max_score = calc_score(N, M, cakes);
    
    cout << max_score << endl;
    
    return 0;
}