import sys

def count_pairs(N, M, candies):
    prefix_sum = [0] * (N + 1)
    freq = [0] * M
    freq[0] = 1
    ans = 0
    for i in range(1, N + 1):
        prefix_sum[i] = prefix_sum[i - 1] + candies[i - 1]
        mod = prefix_sum[i] % M
        ans += freq[mod]
        freq[mod] += 1
    return ans

def main():
    N, M = map(int, input().split())
    candies = list(map(int, input().split()))
    result = count_pairs(N, M, candies)
    print(result)

if __name__ == "__main__":
    main()