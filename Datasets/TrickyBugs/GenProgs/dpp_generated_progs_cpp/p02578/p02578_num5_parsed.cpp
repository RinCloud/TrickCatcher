#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> heights(N);

    for(int i=0; i<N; i++)
    {
        cin >> heights[i];
    }

    int minHeight = 0;
    int currentHeight = 0;

    for(int i=1; i<N; i++)
    {
        if(heights[i] < heights[i-1])
        {
            currentHeight = max(currentHeight, heights[i-1] - heights[i]);
        }
        else if(heights[i] > heights[i-1])
        {
            minHeight += heights[i] - heights[i-1];
        }
    }

    cout << minHeight + currentHeight << endl;

    return 0;
}