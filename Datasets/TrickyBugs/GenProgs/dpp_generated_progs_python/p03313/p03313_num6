import sys

def solve_problem(N, A):
    max_sum = max(A)
    prefix_max = [0] * (2**N)
    prefix_max[0] = A[0]
    for i in range(1, 2**N):
        prefix_max[i] = max(A[i], prefix_max[i-1])
    
    result = []
    for K in range(1, 2**N):
        ans = 0
        k = K
        while k >= 1:
            max_value = 0
            for j in range(N):
                if k & (1 << j):
                    max_value = max(max_value, prefix_max[K - (1 << j)])
            ans = max(ans, max_value + prefix_max[K - (1 << j)])
            k -= 1
        result.append(ans)
    
    return result

def main():
    N = int(input())
    A = list(map(int, input().split()))
    
    result = solve_problem(N, A)
    
    for ans in result:
        print(ans)

if __name__ == "__main__":
    main()