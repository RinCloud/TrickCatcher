#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   int N;
   cin >> N;
   
   vector<int> scores(N);
   for(int i = 0; i < N; i++) {
      cin >> scores[i];
   }
   
   sort(scores.begin(), scores.end());
   
   int maxGrade = 0;
   int sum = 0;
   
   for(int i = 0; i < N; i++) {
      sum += scores[i];
      if(sum % 10 != 0) {
         maxGrade = max(maxGrade, sum);
      }
   }
   
   cout << maxGrade << endl;
   
   return 0;
}