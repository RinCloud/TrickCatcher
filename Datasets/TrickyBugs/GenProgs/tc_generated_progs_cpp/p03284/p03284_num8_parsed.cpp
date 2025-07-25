#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin>>N>>K;
    int min_diff = INT_MAX;
    
    for (int i = 1; i <= K; i++)
    {
        if (N % i == 0)
        {
            int num_candles = N / i;
            min_diff = min(min_diff, abs(i - num_candles));
        }
    }
    
    cout << min_diff << endl;
    return 0;
}
