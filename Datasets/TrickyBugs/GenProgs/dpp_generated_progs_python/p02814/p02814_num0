def count_semi_common_multiples(N, M, A):
    count = 0
    
    for X in range(1, M+1):
        is_semi_common = True
        for a_k in A:
            p = (X / a_k) - 0.5
            if not p.is_integer():
                is_semi_common = False
                break
        if is_semi_common:
            count += 1
    
    return count

# Read the input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Count the number of semi-common multiples
result = count_semi_common_multiples(N, M, A)

# Print the result
print(result)