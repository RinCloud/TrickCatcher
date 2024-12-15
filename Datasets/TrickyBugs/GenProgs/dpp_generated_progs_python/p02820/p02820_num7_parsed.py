import sys

def solve(N, K, R, S, P, T):
    score = 0
    
    for i in range(N):
        if i >= K and T[i] == T[i-K]:
            continue
        if T[i] == 'r':
            score += P
        elif T[i] == 's':
            score += R
        elif T[i] == 'p':
            score += S
    
    return score

if __name__ == "__main__":
    N, K = map(int, input().split())
    R, S, P = map(int, input().split())
    T = input().strip()
    
    print(solve(N, K, R, S, P, T))