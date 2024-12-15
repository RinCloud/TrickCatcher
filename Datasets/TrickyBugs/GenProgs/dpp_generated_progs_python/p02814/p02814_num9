# User defined function to find number of semi-common multiples
def find_scm(N, M, A):
    count = 0
    for num in range(1, M+1):
        flag = True
        for i in range(N):
            p = (num / A[i]) - 0.5
            if p.is_integer() and p >= 0:
                continue
            else:
                flag = False
                break
        if flag:
            count += 1
    
    return count

# Reading input values
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Calling the user defined function
result = find_scm(N, M, A)

# Printing the output
print(result)