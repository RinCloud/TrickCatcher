#include<bits/stdc++.h>
using namespace std;

int main() {
	int H, W;
	cin >> H >> W;

	vector<vector<char>> s(H, vector<char>(W));
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> s[i][j];
		}
	}

	bool possible = true;
	for (int i = 0; i < H; i++){
		for (int j = 0; j < W; j++){
			if (s[i][j] == '.') continue;

			bool hasWhiteAdj = (i - 1 >= 0 && s[i - 1][j] == '.') || 
							   (i + 1 < H && s[i + 1][j] == '.') ||
							   (j - 1 >= 0 && s[i][j - 1] == '.') ||
							   (j + 1 < W && s[i][j + 1] == '.');

			if (!hasWhiteAdj){
				possible = false;
				break;
			}
		}

		if (!possible) break;
	}

	cout << (possible ? "Yes" : "No") << endl;

	return 0;
}