#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second > p2.second;
}

int main()
{
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> sushi(N);
    for(int i=0; i<N; i++)
        cin >> sushi[i].first >> sushi[i].second;
    
    sort(sushi.begin(), sushi.end(), compare);
    
    unordered_map<int, int> count;
    long long baseTotalDeliciousness = 0;
    long long varietyBonus = 0;
    long long maxSatisfaction = 0;
    int curIndex = 0;
    
    for(int i=0; i<K; i++)
    {
        baseTotalDeliciousness += sushi[i].second;
        if(count[sushi[i].first] == 0)
        {
            varietyBonus++;
            count[sushi[i].first]++;
        }
        else
            count[sushi[i].first]++;
    }
    
    maxSatisfaction = baseTotalDeliciousness + varietyBonus * varietyBonus;
    
    for(int i=K; i<N; i++)
    {
        if(count[sushi[i].first] == 0)
        {
            varietyBonus++;
            count[sushi[i].first]++;
            
            while(count[sushi[curIndex].first] > 1)
            {
                count[sushi[curIndex].first]--;
                curIndex++;
            }
            
            baseTotalDeliciousness -= sushi[curIndex].second;
            curIndex++;
        }
        
        long long satisfaction = baseTotalDeliciousness + varietyBonus * varietyBonus;
        maxSatisfaction = max(maxSatisfaction, satisfaction);
    }
    
    cout << maxSatisfaction << endl;

    return 0;
}