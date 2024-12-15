def count_multiple_pairs(S):
    count = 0
    n = len(S)
    for i in range(n):
        num = 0
        for j in range(i, n):
            num = num * 10 + int(S[j])
            if num % 2019 == 0:
                count += 1
    return count

S = input()
print(count_multiple_pairs(S))
