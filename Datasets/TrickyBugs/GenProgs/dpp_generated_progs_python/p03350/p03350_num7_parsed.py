from itertools import combinations

def find_longest_subsequence(S, K):
    N = len(S[0])
    count = {}
    
    # Generate all possible subsequences
    for i in range(N+1):
        for j in range(2**i):
            subsequence = []
            for k in range(N):
                if (j >> k) & 1:
                    subsequence.append(S[k][i-k-1])
            subsequence = ''.join(subsequence)
            
            # Count the number of strings that contain the subsequence
            count[subsequence] = count.get(subsequence, 0) + 1
    
    # Find the longest subsequence that appears in K or more strings
    longest_subsequence = ''
    for subsequence, appearance in count.items():
        if appearance >= K and (len(subsequence) > len(longest_subsequence) or
                                (len(subsequence) == len(longest_subsequence) and
                                 subsequence < longest_subsequence)):
            longest_subsequence = subsequence
    
    return longest_subsequence

# Read input
N, K = map(int, input().split())
S = []
for _ in range(N+1):
    S.append(input())

# Find and print the result
result = find_longest_subsequence(S, K)
print(result)