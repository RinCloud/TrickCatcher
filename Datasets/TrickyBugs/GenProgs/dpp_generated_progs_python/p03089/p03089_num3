# Start of Program

def check_sequence(N, b):
    a = []
    ops = []

    for i in range(N):
        # Check if b[i] is already present in a or not
        if b[i] in a:
            # If b[i] is present but not at the correct position, then it is not possible
            if a.index(b[i]) != i:
                return -1
        else:
            # Insert b[i] at position i+1 in a
            a.insert(i, b[i])
            ops.append(b[i])
    
    return ops

# Read input from standard input
N = int(input())
b = list(map(int, input().split()))

# Check if it is possible and get the sequence of operations
ops = check_sequence(N, b)

# Print the result
if ops == -1:
    print(-1)
else:
    for op in ops:
        print(op)

# End of Program