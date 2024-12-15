import math

MOD = 1000000007

def count_divisors(n):
    count = 0
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            if n // i == i:
                count += 1
            else:
                count += 2
    return count % MOD

def fact_mod(n):
    result = 1
    for i in range(1, n + 1):
        result = (result * i) % MOD
    return result

def main():
    n = int(input())
    factorial = fact_mod(n)
    divisors = count_divisors(factorial)
    print(divisors)

if __name__ == "__main__":
    main()