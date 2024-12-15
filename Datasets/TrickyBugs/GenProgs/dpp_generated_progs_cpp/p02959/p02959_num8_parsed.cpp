#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> monsters(N+1);
  for (int i = 0; i <= N; i++) {
    cin >> monsters[i];
  }
  
  vector<int> heroes(N);
  for (int i = 0; i < N; i++) {
    cin >> heroes[i];
  }
  
  int max_monsters = 0;
  for (int i = 0; i < N; i++) {
    int defeated_monsters = min(heroes[i], monsters[i]);
    max_monsters += defeated_monsters;
    monsters[i] -= defeated_monsters;
    
    defeated_monsters = min(heroes[i], monsters[i+1]);
    max_monsters += defeated_monsters;
    monsters[i+1] -= defeated_monsters;
  }
  
  cout << max_monsters << endl;
  
  return 0;
}