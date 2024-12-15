#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> health(N);
    for(int i = 0; i < N; i++)
        cin >> health[i];

    sort(health.begin(), health.end());

    int min_final_health = health[0];
    for(int i = 1; i < N; i++)
    {
        min_final_health = __gcd(min_final_health, health[i]);
    }

    cout << min_final_health;

    return 0;
}