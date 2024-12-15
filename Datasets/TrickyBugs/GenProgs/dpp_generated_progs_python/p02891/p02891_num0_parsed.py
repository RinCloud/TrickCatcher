import math

S = input()
K = int(input())

count = 0

if all(c == S[0] for c in S):  # check if all characters are the same
    count = math.ceil(len(S) * K / 2)  # calculate minimum number of operations
else:
    count = sum(1 for i in range(len(S)-1) if S[i] == S[i+1]) * K  # calculate minimum number of operations

print(count)