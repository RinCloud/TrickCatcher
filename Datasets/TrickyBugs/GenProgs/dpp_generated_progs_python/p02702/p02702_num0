def count_pairs(S):
    count = 0
    mod = 2019
    freq = [0] * mod
    prefix = 0
    for i in range(len(S)-1, -1, -1):
        prefix = (int(S[i]) * pow(10, len(S)-i-1, mod) + prefix) % mod
        freq[prefix] += 1
    count += freq[0]
    for f in freq:
        count += f * (f-1) // 2
    return count

S = input().strip()
print(count_pairs(S))