def is_one_integer_possible(N, A):
    even_count = 0
    odd_count = 0
    for num in A:
        if num % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    if even_count % 2 == 0 and odd_count % 2 == 0:
        return "YES"
    elif even_count % 2 == 1 and odd_count % 2 == 1:
        return "YES"
    else:
        return "NO"

# Read input
N = int(input())
A = list(map(int, input().split()))

# Call the function and print the result
print(is_one_integer_possible(N, A))