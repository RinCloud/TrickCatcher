# Takahashi's Substrings

def count_divisible_substrings(N, P, S):
    count = 0
    
    for i in range(N):
        num = 0
        for j in range(i, N):
            num = (num * 10 + int(S[j])) % P
            if num == 0:
                count += 1
    
    return count

# Read input
N, P = map(int, input().split())
S = input()

# Compute and print the count of divisible substrings
print(count_divisible_substrings(N, P, S))