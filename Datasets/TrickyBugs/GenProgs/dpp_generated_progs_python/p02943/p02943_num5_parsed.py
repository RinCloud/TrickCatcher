N, K = map(int, input().split())
S = input()

s = S

for i in range(K):
    t = s[::-1]
    s = s + t

lexicographically_smallest_substring = s[:N]
print(lexicographically_smallest_substring)
