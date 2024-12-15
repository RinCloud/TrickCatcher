# Program:

def count_substring_occurrences(S, l, r):
    count = 0
    for i in range(l, r):
        if S[i] == 'A' and S[i+1] == 'C':
            count += 1
    return count

N, Q = map(int, input().split())
S = input()

for _ in range(Q):
    l, r = map(int, input().split())
    count = count_substring_occurrences(S, l-1, r-2)
    print(count)