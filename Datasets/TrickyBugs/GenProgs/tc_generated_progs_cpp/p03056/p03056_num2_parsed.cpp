#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

#define M 187
#define P 16

int mark[M][M];

int dp[M][M][P][M]; //y1 y2 x1 
int cut[M][M][M];

int H, W;

int main() {

	cin >> H >> W;
	for (int i = 0; i < H; i++)
	{
		string S;
		cin >> S;
		for (int j = 0; j < W; j++)
		{
			//if ((rand()) % 2 == 0) mark[i][j] = 0;
			if (S[j] == '.') mark[i][j] = 0;
			else mark[i][j] = 1;
		}
	}

	for (int w = 1; w <= W; w++)
	{
		for (int y1 = 0; y1 + w <= H; y1++)
		{
			int y2 = y1 + w;

			for (int x1 = 0; x1 < W; x1++)
			{
				dp[y1][x1][0][y2] = x1;
				
				if (w <= 2) {
					int flag = 0;
					for (int x2 = x1; x2 < W; x2++)
					{
						for (int y = y1; y < y2; y++)
						{
							flag |= (1 << mark[y][x2]);
						}
						if (flag == 3) break;
						else dp[y1][x1][0][y2] = x2 + 1;
					}
				}
				else {
					dp[y1][x1][0][y2] = min(dp[y1 + 1][x1][0][y2], dp[y1][x1][0][y2 - 1]);
				}
			}
		}
	}

	for (int p = 1; p < P; p++)
	{
		for (int h = 1; h <= H; h++)
		{
			for (int y1 = 0; y1 + h <= H; y1++)
			{
				int y2 = y1 + h;
				for (int x1 = 0; x1 < W; x1++)
				{
					//yoko
					int ans = dp[y1][x1][p - 1][y2];
					if (ans != W) ans = dp[y1][ans][p - 1][y2];

					if (h >= 2 && dp[y1][x1][p][y2 - 1] > ans) {
						int tmin = min(dp[y1][x1][p][y2 - 1], dp[y1 + 1][x1][p][y2]);

						//tate
						for (int y3 = y1 + 1; y3 < y2 && ans < tmin; y3++)
						{
							if (ans > dp[y1][x1][p - 1][y3]) break;
							while (y3 < y2 - 1 && dp[y1][x1][p - 1][y3] == dp[y1][x1][p - 1][y3 + 1]) {
								y3++;
							}

							if (ans < dp[y3][x1][p - 1][y2]) ans = max(ans, min(dp[y1][x1][p - 1][y3], dp[y3][x1][p - 1][y2]));
						}
					}

					dp[y1][x1][p][y2] = ans;
				}
			}
		}
	}

	int ret = P;
	for (int i = 0; i < P; i++)
	{
		if (dp[0][0][i][H] == W) {
			ret = i;
			break;
		}
	}

	cout << ret << endl;
}
