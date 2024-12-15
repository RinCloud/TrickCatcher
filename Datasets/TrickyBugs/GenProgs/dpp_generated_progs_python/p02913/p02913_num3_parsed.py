N = int(input())
S = input()

max_length = 0

for i in range(1, N):
    substring = S[:i]
    if S.find(substring, i) != -1:
        max_length = max(max_length, len(substring))

print(max_length)