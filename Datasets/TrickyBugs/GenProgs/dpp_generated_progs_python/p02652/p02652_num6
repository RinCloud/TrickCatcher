def min_unbalancedness(S):
    count_0 = 0
    count_1 = 0
    max_unbalancedness = 0
    for i in range(len(S)):
        if S[i] == '0':
            count_0 += 1
        elif S[i] == '1':
            count_1 += 1
        else:
            count_0 += 1
            count_1 += 1
        unbalancedness = abs(count_0 - count_1)
        max_unbalancedness = max(max_unbalancedness, unbalancedness)
    return max_unbalancedness

S = input().strip()
print(min_unbalancedness(S))