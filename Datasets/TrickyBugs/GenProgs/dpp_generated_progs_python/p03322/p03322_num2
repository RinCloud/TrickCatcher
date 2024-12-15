N = int(input())
S = input()

A = [0] * (2 * 10**9 + 1)
P = 0
answer = 0

for i in range(N):
    if S[i] == '+':
        A[P] += 1
    elif S[i] == '-':
        A[P] -= 1
    elif S[i] == '>':
        P += 1
    elif S[i] == '<':
        P -= 1
    if A[P] == 0:
        answer += 1

print(answer)