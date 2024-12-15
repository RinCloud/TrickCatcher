# Start of program
N = int(input())
S = input()

max_length = 0
for i in range(1, N):
    for j in range(i+1, N+1):
        if S[i-1:j-1] in S[j-1:]:
            max_length = max(max_length, j-i)

print(max_length)
# End of program