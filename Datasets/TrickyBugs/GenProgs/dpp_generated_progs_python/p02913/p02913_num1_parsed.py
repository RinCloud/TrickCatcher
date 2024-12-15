# Program:

N = int(input())
S = input()

max_len = 0

for i in range(N):
    for j in range(i+1, N):
        len = j - i
        if i+len <= N-len+1 and S[i:i+len] == S[j:j+len]:
            max_len = max(max_len, len)

print(max_len)