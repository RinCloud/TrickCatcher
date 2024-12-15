def is_multiplication_possible(n):
    for i in range(1, 10):
        if n % i == 0 and n // i in range(1, 10):
            return "Yes"
    return "No"


n = int(input())
print(is_multiplication_possible(n))
