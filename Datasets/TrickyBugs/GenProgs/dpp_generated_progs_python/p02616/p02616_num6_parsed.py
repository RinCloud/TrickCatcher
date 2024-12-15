from itertools import combinations
import sys

MOD = 10**9 + 7

def max_product(N, K, A):
    nums = sorted(A)
    max_product = 1
    for i in range(K):
        max_product *= nums[-i-1]
    return max_product % MOD

def main():
    N, K = map(int, input().split())
    A = list(map(int, input().split()))
    print(max_product(N, K, A))

if __name__ == "__main__":
    main()