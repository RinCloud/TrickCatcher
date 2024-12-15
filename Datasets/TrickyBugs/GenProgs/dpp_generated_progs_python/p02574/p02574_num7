# Function to calculate the greatest common divisor (GCD)
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

# Function to check if a set of numbers is pairwise coprime
def is_pairwise_coprime(numbers):
    n = len(numbers)
    for i in range(n):
        for j in range(i + 1, n):
            if gcd(numbers[i], numbers[j]) != 1:
                return False
    return True

# Function to check if a set of numbers is setwise coprime
def is_setwise_coprime(numbers):
    result = numbers[0]
    for i in range(1, len(numbers)):
        result = gcd(result, numbers[i])
    return result == 1

# Read input
n = int(input())
numbers = list(map(int, input().split()))


# Check if the numbers are pairwise coprime, setwise coprime or neither
is_pairwise = is_pairwise_coprime(numbers)
is_setwise = is_setwise_coprime(numbers)

if is_pairwise:
    print("pairwise coprime")
elif is_setwise:
    print("setwise coprime")
else:
    print("not coprime")