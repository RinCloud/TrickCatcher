import sys

def construct_sequence(N, A, B):
    if A + B - 1 > N or A * B < N:
        return -1

    nums = list(range(1, A + 1))

    k = A
    for i in range(B):
        l = k + B - i - 1
        r = min(N, k + B - i)
        nums.extend(list(range(l, r + 1)))
        k += B - i

    return nums

if __name__ == "__main__":
    N, A, B = map(int, sys.stdin.readline().split())
    sequence = construct_sequence(N, A, B)
    if sequence == -1:
        print(-1)
    else:
        print(" ".join(map(str, sequence)))