#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  int base_price = 700;
  int topping_price = 0;

  for (int i = 0; i < 3; i++) {
    if (S[i] == 'o') {
      topping_price += 100;
    }
  }

  int total_price = base_price + topping_price;
  cout << total_price << endl;

  return 0;
}