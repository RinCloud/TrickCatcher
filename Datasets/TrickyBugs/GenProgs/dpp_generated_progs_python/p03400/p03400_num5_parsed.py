def prepare_chocolates(N, D, X, A):
    chocolates_prepared = X
    
    for i in range(N):
        days = 1
        while days <= D:
            chocolates_prepared += 1
            days += (A[i] + 1)
    
    return chocolates_prepared


# Read input values
N = int(input())
D, X = map(int, input().split())
A = [int(input()) for _ in range(N)]

# Call the function and print the result
result = prepare_chocolates(N, D, X, A)
print(result)