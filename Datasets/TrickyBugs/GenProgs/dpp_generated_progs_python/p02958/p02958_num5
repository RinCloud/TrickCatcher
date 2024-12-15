# Program

def can_sort(p):
    n = len(p)
    for i in range(n):
        for j in range(i+1, n):
            if p[i] > p[j]:
                p[i], p[j] = p[j], p[i]
                if sorted(p) == p:
                    return "YES"
                p[i], p[j] = p[j], p[i]  # Revert the swap
    return "NO"

# Read input
n = int(input())
p = [int(x) for x in input().split()]

# Check if p can be sorted
result = can_sort(p)

# Print result
print(result)