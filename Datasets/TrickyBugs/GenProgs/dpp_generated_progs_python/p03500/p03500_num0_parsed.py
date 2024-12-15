import sys

def solve(N, K, A):
    mod = 1000000007
    result = 0
    for i in range(60, -1, -1):
        cnt = 0
        for j in range(N):
            cnt += (A[j] >> i) & 1
        # check if operation A can be performed on all numbers
        if (K >> i) & 1 == 1:
            # number of combinations after performing operation A on all numbers
            result += (1 << i) * cnt
            result %= mod
        else:
            # determine if operation B can be performed
            if (K >> (i + 1)) & 1 == 1:
                # number of combinations after performing operation B on all numbers
                result += (1 << i) * cnt
                result %= mod
                # determine the maximum possible number after performing operation A on each number
                max_num = 0
                for j in range(N):
                    if (A[j] >> (i + 1)) & 1 == 1:
                        max_num = max(max_num, A[j] ^ (1 << (i + 1)) - 1)
                # number of combinations formed by adding 1 to each number and performing operation A
                result += max_num + 1
                result %= mod
            else:
                # number of combinations after performing operation A on all numbers
                result += (1 << i) * cnt
                result %= mod
    return result

if __name__ == "__main__":
    input_data = sys.stdin.readline().strip().split()
    N = int(input_data[0])
    K = int(input_data[1])
    A = list(map(int, sys.stdin.readline().strip().split()))
    ans = solve(N, K, A)
    print(ans)