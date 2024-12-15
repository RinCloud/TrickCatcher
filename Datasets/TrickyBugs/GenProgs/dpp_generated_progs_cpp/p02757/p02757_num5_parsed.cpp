#include<bits/stdc++.h>
using namespace std;

// Function to count the number of non-empty (contiguous) substrings of S
// that are divisible by P.
int countSubstrings(string S, int N, int P) {

	// Store the frequency of remainders when each prefix of S
	// is divided by P.
	vector<int> freq(P, 0);

	int answer = 0;
	int power = 1;
	int prefixSum = 0;
	freq[0]++;

	// Traverse each character from right to left in S
	for (int i = N - 1; i >= 0; i--) {

		// Find the prefix sum of the previous prefix
		prefixSum = prefixSum + (S[i] - '0') * power;

		// Calculate the modulo of prefixSum by P
		prefixSum %= P;

		// Update the answer with the frequency of prefixSum
		answer += freq[prefixSum];

		// Increment the frequency of prefixSum
		freq[prefixSum]++;

		// Update the power
		power = (power * 10) % P;
	}

	// Return the final answer
	return answer;
}

// Driver code
int main() {

	int N, P;
	string S;

	// Read the input N, P, and S
	cin >> N >> P;
	cin >> S;

	// Count the number of non-empty (contiguous) substrings of S
	// that are divisible by P
	int count = countSubstrings(S, N, P);

	// Print the count
	cout << count;

	return 0;
}