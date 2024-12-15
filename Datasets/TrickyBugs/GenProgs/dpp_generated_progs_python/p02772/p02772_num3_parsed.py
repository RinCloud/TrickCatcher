# PROGRAM:

def check_immigrant_entry(n, a):
    for num in a:
        if num % 2 == 0 and (num % 3 != 0 and num % 5 != 0):
            return "DENIED"
    return "APPROVED"

# Get the input
n = int(input())
a = list(map(int, input().split()))

# Check immigrant entry
result = check_immigrant_entry(n, a)

# Print the result
print(result)