# Program

N = int(input())
S = input()

max_length = 0

for i in range(N):
    for j in range(i + 1, N):
        length = j - i
        if S[i:i+length] == S[j:j+length]:
            max_length = max(max_length, length)

print(max_length)