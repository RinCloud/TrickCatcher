def solution(N, X, A):
    mod = 998244353

    def count_bits(n):
        count = 0
        while n > 0:
            count += 1
            n >>= 1
        return count

    def xor_sum(x, y):
        res = 0
        for i in range(4000):
            b1 = (x >> i) & 1
            b2 = (y >> i) & 1
            res |= ((b1 ^ b2) << i)
        return res

    count = 0
    xor_values = []
    for a in A:
        xor_values.append(xor_sum(X, a))
    xor_values.sort()

    for i in range(N):
        count += 1
        count %= mod

        if xor_values[i] <= X:
            X = max(X, xor_values[i] * 2)
        else:
            break

    return count

if __name__ == "__main__":
    N, X = map(int, input().split())
    A = []
    for _ in range(N):
        A.append(int(input(), 2))
    print(solution(N, X, A))