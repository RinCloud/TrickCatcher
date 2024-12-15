MOD = int(1e9 + 7)

def count_colorful_integer_sequence(N, K, M, A):
    min_seq_len = K - M + 1
    max_seq_len = K
    res = 0

    for seq_len in range(min_seq_len, max_seq_len+1):
        seq_count = N - seq_len + 1
        res += seq_count

    return res % MOD

N, K, M = map(int, input().split())
A = list(map(int, input().split()))

print(count_colorful_integer_sequence(N, K, M, A))