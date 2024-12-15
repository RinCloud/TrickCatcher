#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // Create a vector of pairs to store the sushi pieces
    vector<pair<int, int>> sushi(N);

    for (int i = 0; i < N; i++) {
        cin >> sushi[i].first >> sushi[i].second;
    }

    // Sort the sushi pieces based on their deliciousness in descending order
    sort(sushi.begin(), sushi.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    // Create a map to store the count of different kinds of toppings
    map<int, int> count;

    long long baseDeliciousness = 0;
    long long varietyBonus = 0;
    long long maxSatisfaction = 0;

    for (int i = 0; i < K; i++) {
        int topping = sushi[i].first;
        int deliciousness = sushi[i].second;

        // Calculate the base total deliciousness
        baseDeliciousness += deliciousness;

        // Increment the count of topping
        count[topping]++;

        // Calculate the variety bonus
        varietyBonus = count.size() * count.size();

        // Calculate the satisfaction
        long long satisfaction = baseDeliciousness + varietyBonus;

        // Update the maximum satisfaction
        maxSatisfaction = max(maxSatisfaction, satisfaction);
    }

    cout << maxSatisfaction << endl;

    return 0;
}