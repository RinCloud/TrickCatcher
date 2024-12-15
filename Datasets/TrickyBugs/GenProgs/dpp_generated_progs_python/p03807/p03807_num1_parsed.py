def is_possible(N, A):
    # Count the number of even and odd integers
    even_count = 0
    odd_count = 0
    for num in A:
        if num % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    
    # If there are either all even or all odd integers, it is possible
    if even_count == N or odd_count == N:
        return "YES"
    
    # If there are both even and odd integers, it is not possible
    return "NO"

# Read input
N = int(input())
A = list(map(int, input().split()))

# Check if it is possible to have only one integer on the blackboard
result = is_possible(N, A)

# Print the result
print(result)