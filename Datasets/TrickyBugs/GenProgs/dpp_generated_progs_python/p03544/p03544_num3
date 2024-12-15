def find_lucas_number(N):
    if N == 0:
        return 2
    elif N == 1:
        return 1
    else:
        prev2 = 2
        prev1 = 1
        for i in range(2, N+1):
            current = prev1 + prev2
            prev2 = prev1
            prev1 = current
        return current

# read input from stdin
N = int(input())

# find the N-th Lucas number
lucas_number = find_lucas_number(N)

# print the result
print(lucas_number)