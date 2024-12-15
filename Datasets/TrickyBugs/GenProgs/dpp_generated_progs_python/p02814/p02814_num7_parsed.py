def count_semi_common_multiples(N, M, A):
    # Function to find the number of semi-common multiples of A among the integers between 1 and M (inclusive)
    
    count = 0
    
    for X in range(1, M+1):
        is_semi_common_multiple = True
        
        for k in range(N):
            p = 0
            
            while X != A[k] * (p+0.5):
                p += 1
                
                if A[k] * (p+0.5) > X:
                    is_semi_common_multiple = False
                    break
                    
            if not is_semi_common_multiple:
                break
                
        if is_semi_common_multiple:
            count += 1
                
    return count


# Taking input from standard input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Calling the function to find the number of semi-common multiples
result = count_semi_common_multiples(N, M, A)

# Printing the result
print(result)