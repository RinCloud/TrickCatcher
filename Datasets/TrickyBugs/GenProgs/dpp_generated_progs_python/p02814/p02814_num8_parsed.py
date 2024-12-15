def count_semi_common_multiples(N, M, A):
    count = 0
    for i in range(1, M + 1):
        is_semi_common_multiple = True
        for k in range(N):
            p = (i / A[k]) - 0.5
            if not p.is_integer():
                is_semi_common_multiple = False
                break
        if is_semi_common_multiple:
            count += 1
    return count

# Read input values
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Calculate and print the number of semi-common multiples
result = count_semi_common_multiples(N, M, A)
print(result)
