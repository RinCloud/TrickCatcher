# PROGRAM
N, K = map(int, input().split())
S = list(input())

max_hands = 0
for i in range(2):
    flip = i
    hands = [0] * N
    cnt = 0
    for j in range(N):
        if S[j] == str(flip):
            hands[j] = 1
            cnt += 1
        if j >= K:
            cnt -= hands[j-K]
        if j >= K-1:
            max_hands = max(max_hands, cnt)
        flip = 1 - flip

print(max_hands)