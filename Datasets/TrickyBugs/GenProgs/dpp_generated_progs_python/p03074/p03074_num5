# Solution:

N, K = map(int, input().split())
S = input()

count = 0
for i in range(N):
    if S[i] == '1':
        count += 1

max_consecutive = count
for i in range(K):
    if S[i] == '1':
        count -= 1
    else:
        count += 1
    max_consecutive = max(max_consecutive, count)

print(max_consecutive)