# Program:

def max_same_elements(N, M, p, pairs):
    # Create a list to keep track of the position of each element in p
    positions = [0] * (N+1)
    for i in range(N):
        positions[p[i]] = i
    
    # Initialize a counter for the number of elements which are in their correct position
    count = 0
    for i in range(1, N+1):
        if p[i-1] == i:
            count += 1
    
    # Iterate through each pair and check if swapping the elements would increase the count
    for pair in pairs:
        x, y = pair
        if positions[x] < positions[y]:
            count -= 1
        elif positions[x] > positions[y]:
            count += 1
    
    return count


# Read input
N, M = map(int, input().split())
p = list(map(int, input().split()))
pairs = [list(map(int, input().split())) for _ in range(M)]

# Call the function and print the result
result = max_same_elements(N, M, p, pairs)
print(result)