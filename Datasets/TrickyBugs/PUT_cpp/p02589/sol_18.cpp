#include<cstdio>
int n;
int trieroot;
int trien;
int triep[1001000];
int trier[1001000][26];
int triec[1001000];
int triecnt[1001000];
int triercnt[1001000][26];
char s[1001000];
int pd[200100];
int newtn(int prt, int c) {
	triep[trien] = prt;
	triec[trien] = c;
	trien++;
	return trien - 1;
}
int main() {
	scanf("%d", &n);
	trien = 1;
	trieroot = newtn(0, 0);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		int x = trieroot;
		int len = 0;
		for (len = 0; s[len]; len++);
		for (int j = len - 1; j >= 0; j--) {
			int d = s[j] - 'a';
			if (trier[x][d] == 0) {
				trier[x][d] = newtn(x, d);
			}
			x = trier[x][d];
		}
		triecnt[x]++;
		pd[i] = x;
	}
	for (int i = trien - 1; i >= 1; i--) {
		triecnt[triep[i]] += triecnt[i];
		for (int j = 0; j < 26; j++) {
			if (j == triec[i]) {
				triercnt[triep[i]][j] += triecnt[i];
			}
			else {
				triercnt[triep[i]][j] += triercnt[i][j];
			}
		}
	}
	long long int ans = 0;
	for (int i = 0; i < n; i++) {
		int x = pd[i];
		int y = triep[x];
		int d = triec[x];
		ans += triercnt[y][d] - 1;
	}
	printf("%lld\n", ans);
	return 0;
}
