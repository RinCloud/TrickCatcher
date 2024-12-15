# Program

def maximize_count(N, seq):
    freq = {}
    max_count = 0
    
    for i in range(N):
        freq[seq[i]] = freq.get(seq[i], 0) + 1
        max_count = max(max_count, freq[seq[i]])
        max_count = max(max_count, freq.get(seq[i]+1, 0))
        max_count = max(max_count, freq.get(seq[i]-1, 0))
    
    return max_count

# Read input from standard input
N = int(input())
seq = list(map(int, input().split()))

# Call the function and print the output
print(maximize_count(N, seq))