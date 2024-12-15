import sys

def count_pairs(S):
    count = 0
    for i in range(len(S)):
        num = 0
        for j in range(i, len(S)):
            num = num * 10 + int(S[j])
            if num % 2019 == 0:
                count += 1
    return count

S = sys.stdin.readline().strip()
print(count_pairs(S))