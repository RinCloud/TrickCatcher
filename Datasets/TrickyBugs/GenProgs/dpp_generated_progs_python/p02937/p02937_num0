s = input()
t = input()

# concatenate s 10^100 times
s_prime = s * int(10**100)

# check if t is a subsequence of s_prime
i = 1
idx = 0
while idx < len(t) and i <= len(s_prime):
    if t[idx] == s_prime[i-1]:
        idx += 1
    i += 1

# print the minimum i if t is a subsequence of s_prime, otherwise print -1
if idx == len(t):
    print(i-1)
else:
    print(-1)