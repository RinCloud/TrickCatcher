N = int(input())
S = input()

max_len = 0

for i in range(N):
    for j in range(i + 1, N):
        len_substring = j - i
        if len_substring > max_len and S[i:i + len_substring] in S[j:]:
            max_len = len_substring

print(max_len)