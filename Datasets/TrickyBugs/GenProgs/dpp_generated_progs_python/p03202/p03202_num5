def min_num_diff_chars(N, A):
    max_len = max(A)
    min_chars = set()
    
    for i in range(1, max_len + 1):
        min_chars.add(chr(96 + (i % 26))) # add characters 'a' to 'z' repeatedly
        
    return len(min_chars)

# get input
N = int(input())
A = list(map(int, input().split()))

# call function and print result
print(min_num_diff_chars(N, A))