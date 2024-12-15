N = int(input())
S = input()

A = [0] * (2 * 10**9 + 1)
P = 0

prefix_sum = [0] * (N + 1)
for i in range(N):
    prefix_sum[i+1] = prefix_sum[i] + (1 if S[i] == '+' else -1)

suffix_sum = [0] * (N + 2)
for i in range(N, 0, -1):
    suffix_sum[i] = suffix_sum[i+1] + (1 if S[i-1] == '-' else -1)

answer = 0
for i in range(1, N+2):
    left = prefix_sum[i-1] - P
    right = suffix_sum[i] + P
    if left <= right:
        answer += right - left + 1

    if i <= N:
        if S[i-1] == '>':
            P += 1
        elif S[i-1] == '<':
            P -= 1

print(answer)