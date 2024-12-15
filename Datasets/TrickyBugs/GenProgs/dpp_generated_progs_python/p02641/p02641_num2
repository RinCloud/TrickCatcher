import sys

def find_nearest_integer(X, N, p):
    min_diff = sys.maxsize
    nearest_integer = X
    
    for i in range(1, 101):
        if i not in p:
            diff = abs(X - i)
            if diff < min_diff:
                min_diff = diff
                nearest_integer = i
            elif diff == min_diff and i < nearest_integer:
                nearest_integer = i
    
    return nearest_integer

# Read the input from standard input
X, N = map(int, input().split())
p = list(map(int, input().split()))

# Call the function and print the result
print(find_nearest_integer(X, N, p))