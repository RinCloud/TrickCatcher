# Program

def check_product(n):
    for i in range(1, 10):
        if n % i == 0 and n // i in range(1, 10):
            return "Yes"
    return "No"

N = int(input())
print(check_product(N))