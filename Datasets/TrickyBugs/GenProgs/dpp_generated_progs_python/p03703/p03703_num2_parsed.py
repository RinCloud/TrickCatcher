import sys

N, K = map(int, sys.stdin.readline().split())
a = [int(sys.stdin.readline()) for _ in range(N)]

count = 0
for i in range(N):
    for j in range(i, N):
        subsequence_sum = sum(a[i:j+1])
        subsequence_len = j - i + 1
        if subsequence_sum / subsequence_len >= K:
            count += 1

print(count)