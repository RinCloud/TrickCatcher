def count_odd_digits(N):
    count = 0
    for i in range(1, N+1):
        # Check if the number of digits is odd
        if len(str(i)) % 2 != 0:
            count += 1
    return count

N = int(input())
result = count_odd_digits(N)
print(result)
