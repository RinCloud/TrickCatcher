import sys

MOD = 998244353

def power_mod(base, exponent):
    result = 1
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % MOD
        base = (base * base) % MOD
        exponent //= 2
    return result

def main():
    N = int(input())
    
    X = []
    Y = []
    Z = []
    
    M = int(input())
    for _ in range(M):
        a, b = map(int, input().split())
        X.append((a, b))
    
    M = int(input())
    for _ in range(M):
        a, b = map(int, input().split())
        Y.append((a, b))
    
    M = int(input())
    for _ in range(M):
        a, b = map(int, input().split())
        Z.append((a, b))
    
    max_weight = [0] * (N + 1)
    
    for a, b in X:
        max_weight[a] = max(max_weight[a], 1)
        max_weight[b] = max(max_weight[b], 1)
    
    for a, b in Y:
        max_weight[a] = max(max_weight[a], 2)
        max_weight[b] = max(max_weight[b], 2)
    
    for a, b in Z:
        max_weight[a] = max(max_weight[a], 3)
        max_weight[b] = max(max_weight[b], 3)
    
    result = 0
    for i in range(1, N + 1):
        result = (result + power_mod(10, 18 * (N - i)) * max_weight[i]) % MOD
    
    print(result)

if __name__ == "__main__":
    main()
