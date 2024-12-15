N = int(input())
S = input()

count = 0
for i in range(N):
    if S[i] == '+':
        count += 1
    elif S[i] == '-':
        count -= 1

answer = 0
diff = [0] * (2 * N + 1)
for i in range(N):
    if S[i] == '>':
        answer += diff[count]
    elif S[i] == '<':
        answer += diff[count - 2]
    elif S[i] == '+':
        count += 1
    elif S[i] == '-':
        count -= 1

    diff[count + 1] += 1

print(answer)