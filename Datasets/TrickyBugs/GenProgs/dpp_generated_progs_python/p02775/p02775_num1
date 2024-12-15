import math

def banknotes_used(N):
    min_banknotes = float('inf')
    
    for i in range(10, -1, -1):
        banknote = pow(10, pow(10, i))
        
        if banknote <= N:
            count = N // banknote
            N %= banknote
            min_banknotes = min(min_banknotes, count + math.ceil(N / banknote))
    
    return min_banknotes

# Read the input from standard input
N = int(input())

# Call the function and print the result
result = banknotes_used(N)
print(result)