# Program

def sum_of_products(N, A):
    P = 200003
    total_sum = 0
    
    for i in range(N):
        for j in range(i+1, N):
            product = (A[i] * A[j]) % P
            total_sum += product
    
    return total_sum


# Getting inputs
N = int(input())
A = list(map(int, input().split()))

# Calling the function and printing the result
result = sum_of_products(N, A)
print(result)