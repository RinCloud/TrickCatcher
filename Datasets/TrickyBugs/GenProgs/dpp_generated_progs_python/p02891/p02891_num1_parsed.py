# Reading input
S = input().strip()
K = int(input())

# Counting adjacent repeated characters in S
repeated_chars = 0
for i in range(len(S)-1):
    if S[i] == S[i+1]:
        repeated_chars += 1

# Calculating the minimum number of operations required
min_operations = repeated_chars * (K // 2)

# If K is odd, we need to perform one additional operation
if K % 2 == 1 and repeated_chars > 0:
    min_operations += 1

# Printing the minimum number of operations required
print(min_operations)