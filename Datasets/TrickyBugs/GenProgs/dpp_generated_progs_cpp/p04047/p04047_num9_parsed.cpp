#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> lengths(2*N);
    for (int i = 0; i < 2*N; i++) {
        cin >> lengths[i];
    }

    sort(lengths.begin(), lengths.end());

    int totalIngredients = 0;
    for (int i = 0; i < N; i++) {
        totalIngredients += lengths[2*i];
    }

    cout << totalIngredients << endl;

    return 0;
}