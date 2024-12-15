'''
Program: CountPairs

Description: Given integers L and R, this program finds the number of pairs of integers (x, y) (L <= x <= y <= R) such that 
the remainder when y is divided by x is equal to y XOR x. The program prints the result modulo 10^9 + 7.

'''

def count_pairs(L, R):
    MOD = 1000000007
    result = 0

    for x in range(L, R + 1):
        for y in range(x, R + 1):
            remainder = y % x
            xor_value = y ^ x

            if remainder == xor_value:
                result += 1

    return result % MOD


if __name__ == "__main__":
    L, R = map(int, input().split())
    print(count_pairs(L, R))
