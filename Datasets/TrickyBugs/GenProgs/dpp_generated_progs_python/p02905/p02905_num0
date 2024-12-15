import fractions

MOD = 998244353

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

def main():
    N = int(input())
    A = list(map(int, input().split()))
    
    ans = 0
    for i in range(N-1):
        for j in range(i+1, N):
            ans += lcm(A[i], A[j])
            ans %= MOD
    
    print(ans)

if __name__ == "__main__":
    main()