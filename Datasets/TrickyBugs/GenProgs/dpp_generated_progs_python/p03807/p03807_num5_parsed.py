# Generating the python program for the given intention

def check_possible(N, A):
    num_even = sum([1 for i in A if i%2==0])
    num_odd = N - num_even
    
    if num_even == N or num_odd == N:
        return "YES"
    else:
        return "NO"

# Reading input values
N = int(input())
A = list(map(int, input().split()))

# Checking possibility
result = check_possible(N, A)

# Printing the result
print(result)