import itertools

def count_pairs(S):
    pairs = 0
    for i in range(len(S)):
        for j in range(i, len(S)):
            num = int(S[i:j+1])
            if num % 2019 == 0:
                pairs += 1
    return pairs

S = input().strip()
print(count_pairs(S))