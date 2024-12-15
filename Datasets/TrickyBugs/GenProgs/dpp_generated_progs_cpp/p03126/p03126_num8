#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  
  vector<unordered_set<int>> likedBy(N);
  unordered_set<int> commonFoods;
  
  for (int i = 0; i < N; i++) {
    int K;
    cin >> K;
    
    for (int j = 0; j < K; j++) {
      int foodId;
      cin >> foodId;
      likedBy[i].insert(foodId);
    }
    
    if (i == 0) {
      commonFoods = likedBy[i];
    } else {
      unordered_set<int> intersection;
      
      for (int foodId : likedBy[i]) {
        if (commonFoods.count(foodId) > 0) {
          intersection.insert(foodId);
        }
      }
      
      commonFoods = intersection;
    }
  }
  
  cout << commonFoods.size() << endl;
  
  return 0;
}