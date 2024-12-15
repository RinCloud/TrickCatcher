def count_substrings(N, P, S):
    count = 0
    for i in range(N):
        for j in range(i, N):
            substring = S[i:j+1]
            if int(substring) % P == 0:
                count += 1
    return count

N, P = map(int, input().split())
S = input()

print(count_substrings(N, P, S))