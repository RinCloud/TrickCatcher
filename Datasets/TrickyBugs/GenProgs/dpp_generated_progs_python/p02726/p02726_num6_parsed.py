import sys

def solve(N, X, Y):
    dist = [[0] * (N + 1) for _ in range(N + 1)]
    
    for i in range(1, N):
        for j in range(i + 1, N + 1):
            dist[i][j] = min(j - i, abs(X - i) + 1 + abs(Y - j))
            dist[j][i] = dist[i][j]
    
    cnt = [0] * (N + 1)
    for i in range(1, N):
        for j in range(i + 1, N + 1):
            cnt[dist[i][j]] += 1
    
    for k in range(1, N):
        print(cnt[k])

def main():
    line = sys.stdin.readline().strip()
    N, X, Y = map(int, line.split())
    solve(N, X, Y)

if __name__ == '__main__':
    main()