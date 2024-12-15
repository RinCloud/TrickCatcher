import sys

MOD = 10**9 + 7

def xor_sum(n, arr):
    xor_sum = 0
    for i in range(n-1):
        for j in range(i+1, n):
            xor_sum = (xor_sum + (arr[i] ^ arr[j])) % MOD
    return xor_sum

def main():
    n = int(input())
    arr = list(map(int, input().split()))
    result = xor_sum(n, arr)
    print(result)

if __name__ == "__main__":
    main()