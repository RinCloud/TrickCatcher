import itertools

def count_triangle_sticks(N, L):
    count = 0
    
    for i, j, k in itertools.combinations(range(N), 3):
        if L[i] != L[j] and L[j] != L[k] and L[i] != L[k]:
            sides = [L[i], L[j], L[k]]
            sides.sort()
            
            if sides[0] + sides[1] > sides[2]:
                count += 1
    
    return count


# Read the input
N = int(input())
L = list(map(int, input().split()))

# Print the result
print(count_triangle_sticks(N, L))