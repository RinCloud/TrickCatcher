#include <iostream>
using namespace std;

int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;

  int deliveryTime = 0;
  
  int orderTime = 0;
  
  // Order ABC Don
  if (A > B) {
    deliveryTime += A;
    orderTime = A;
  } else {
    deliveryTime += B;
    orderTime = B;
  }
  
  // Order ARC Curry
  if (C > D) {
    deliveryTime += C;
    orderTime = max(orderTime + 10, C);
  } else {
    deliveryTime += D;
    orderTime = max(orderTime + 10, D);
  }
  
  // Order AGC Pasta
  deliveryTime += C;
  orderTime = max(orderTime + 10, C);
  
  // Order APC Ramen
  deliveryTime += D;
  orderTime = max(orderTime + 10, D);
  
  // Order ATC Hanbagu
  deliveryTime += E;
  orderTime = max(orderTime + 10, E);
  
  cout << deliveryTime << endl;
  
  return 0;
}