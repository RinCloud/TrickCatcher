from typing import List

MOD = 10 ** 9 + 7

def count_combinations(N: int, K: int, A: List[int]) -> int:
    max_bit = max(len(bin(a)) - 2 for a in A)
    cnt = [[0, 0] for _ in range(max_bit)]
    
    for a in A:
        for i in range(max_bit):
            cnt[i][0] += (a >> i) & 1
            cnt[i][1] += 1 - ((a >> i) & 1)
    
    ans = 1
    for i in range(max_bit):
        if (K >> i) & 1:
            ans *= cnt[i][1]
        else:
            ans *= cnt[i][0] + cnt[i][1]
        ans %= MOD
    
    return ans

if __name__ == "__main__":
    N, K = map(int, input().split())
    A = list(map(int, input().split()))
    
    result = count_combinations(N, K, A)
    print(result)