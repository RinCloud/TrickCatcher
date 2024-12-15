import sys

def count_pairs(N, M, A):
    prefix_sum = [0]
    for i in range(N):
        prefix_sum.append(prefix_sum[-1] + A[i])

    mod_count = {0: 1}
    count = 0
    for i in range(1, N+1):
        mod = prefix_sum[i] % M
        count += mod_count.get(mod, 0)
        mod_count[mod] = mod_count.get(mod, 0) + 1
    return count

if __name__ == "__main__":
    input_line = sys.stdin.readline().strip().split()
    N = int(input_line[0])
    M = int(input_line[1])
    A = list(map(int, sys.stdin.readline().strip().split()))
    print(count_pairs(N, M, A))