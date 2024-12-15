from itertools import permutations

def find_smallest_integer(N, M, conditions):
    # Generate all permutations of digits of length N
    digits = [str(i) for i in range(10)]
    perms = permutations(digits, N)
    
    for perm in perms:
        num = ''.join(perm)
        flag = True
        
        # Check if the conditions are satisfied for each digit
        for s, c in conditions:
            if num[s-1] != str(c):
                flag = False
                break
        
        if flag:
            return int(num)
    
    return -1

# Read input
N, M = map(int, input().split())
conditions = []
for _ in range(M):
    s, c = map(int, input().split())
    conditions.append((s, c))

# Find the smallest integer satisfying the conditions
result = find_smallest_integer(N, M, conditions)

# Print the result
print(result)