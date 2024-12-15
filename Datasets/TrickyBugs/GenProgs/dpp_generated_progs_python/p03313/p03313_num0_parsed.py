def solve(A):
    N = len(A)
    max_sums = []
    for K in range(1, N):
        max_sum = float('-inf')
        for i in range(N):
            if i <= K:
                for j in range(i + 1, N):
                    if j <= K:
                        max_sum = max(max_sum, A[i] + A[j])
        max_sums.append(max_sum)
    return max_sums

def main():
    N = int(input())
    A = list(map(int, input().split()))
    result = solve(A)
    for max_sum in result:
        print(max_sum)

if __name__ == "__main__":
    main()