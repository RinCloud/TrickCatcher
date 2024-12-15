N = int(input())
S = input()

prefix = [0] * (N+1)
for i in range(1, N+1):
    prefix[i] = prefix[i-1] + (S[i-1] == '+') - (S[i-1] == '-')

suffix = [0] * (N+1)
for i in range(N-1, -1, -1):
    suffix[i] = suffix[i+1] + (S[i] == '-') - (S[i] == '+')

answer = 0
for i in range(N+1):
    if S[i-1] == '>' and S[i] == '-' or S[i-1] == '<' and S[i] == '+':
        answer += prefix[i-1] + suffix[i+1] + 1

print(answer)