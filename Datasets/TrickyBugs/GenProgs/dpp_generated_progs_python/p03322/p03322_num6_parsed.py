N = int(input())
S = input()

count = [0] * (N + 1)
for i in range(N-1, -1, -1):
    if S[i] == '>':
        count[i] = count[i+1] + 1

answer = count[0]
acc = 0

for i in range(N):
    if S[i] == '-':
        acc -= 1
    elif S[i] == '<':
        acc += 1
    elif S[i] == '+':
        answer += count[i+1]
    elif S[i] == '>':
        answer += count[i+1] - acc

print(answer)