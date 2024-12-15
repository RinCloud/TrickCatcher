import sys

MOD = 998244353
exp = 10 ** 18

def power(x, y):
    res = 1
    while y > 0:
        if y % 2 == 1:
            res = res * x % MOD
        x = x * x % MOD
        y //= 2
    return res

def main():
    N = int(input())
    M = []
    for _ in range(3):
        M.append(int(input()))
        for _ in range(M[-1]):
            input()
    
    ans = 0
    for i in range(N):
        ans = (ans + (power(exp, i + i + i) * power(exp - 1, 3 * N -3 * i - 3)) % MOD) % MOD
    
    print(ans)

if __name__ == "__main__":
    main()