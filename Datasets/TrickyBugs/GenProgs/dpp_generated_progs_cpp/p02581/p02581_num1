#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> cards(3*N);
    for (int i = 0; i < 3*N; i++) {
        cin >> cards[i];
    }

    int maxPoints = 0;

    for (int i = 1; i <= N; i++) {
        vector<int> temp(cards.begin(), cards.end());
        int points = 0;

        for (int j = 0; j < N-1; j++) {
            sort(temp.begin(), temp.begin()+5);
          
            if (temp[0] == temp[1] && temp[1] == temp[2]) {
                points++;
            }

            temp.erase(temp.begin(), temp.begin()+3);
        }

        if (temp[0] == temp[1] && temp[1] == temp[2]) {
            points++;
        }

        maxPoints = max(maxPoints, points);
      
        rotate(cards.begin(), cards.begin()+3, cards.end());
    }

    cout << maxPoints << endl;

    return 0;
}