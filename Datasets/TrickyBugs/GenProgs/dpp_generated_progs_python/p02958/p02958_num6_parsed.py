# Given input "N" and sequence "p"
N = int(input())
p = list(map(int, input().split()))

# Check if the sequence is already sorted in ascending order
if p == sorted(p):
    print("YES")
    exit()

# Iterate through each index of the sequence
for i in range(N):
    # For each index, iterate through all indices after it
    for j in range(i+1, N):
        # Swap p[i] and p[j]
        p[i], p[j] = p[j], p[i]
        
        # Check if the sequence is now sorted in ascending order
        if p == sorted(p):
            print("YES")
            exit()
        
        # Swap back the elements
        p[i], p[j] = p[j], p[i]

# If the sequence cannot be sorted by performing the operation once, print "NO"
print("NO")