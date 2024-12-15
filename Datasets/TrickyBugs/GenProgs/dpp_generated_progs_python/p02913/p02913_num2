# Program

N = int(input())
S = input()

max_length = 0

for i in range(N):
    for j in range(i+1, N):
        length = 0
        while j + length < N and S[i+length] == S[j+length]:
            length += 1
        if length > max_length:
            max_length = length

print(max_length)