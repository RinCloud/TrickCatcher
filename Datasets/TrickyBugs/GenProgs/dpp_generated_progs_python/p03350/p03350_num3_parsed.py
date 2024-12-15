import itertools

def longest_subsequence(N, K, strings):
    lengths = [2**i for i in range(N+1)]
    s = [''] * lengths[N]
    for i in range(N+1):
        for j in range(lengths[i]):
            s[j] += strings[i][j]
    
    substrings = set()
    for i in range(N+1):
        for j in range(lengths[i]):
            for k in range(j+1, lengths[i]):
                substrings.add(s[j] + s[k])
    
    max_count = 0
    max_subsequence = ''
    for subseq in substrings:
        count = 0
        for string in strings:
            if subseq in string:
                count += 1
        if count >= K:
            if count > max_count or (count == max_count and subseq < max_subsequence):
                max_count = count
                max_subsequence = subseq
    
    return max_subsequence


# Read input
N, K = map(int, input().split())
strings = [input() for _ in range(N+1)]

# Calculate and print the lexicographically smallest string among the longest strings that are subsequences of K or more different strings
print(longest_subsequence(N, K, strings))