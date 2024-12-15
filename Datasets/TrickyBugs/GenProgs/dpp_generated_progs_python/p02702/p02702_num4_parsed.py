import collections

def count_pairs(S):
    prefix_sum = [0]
    for i in range(len(S)):
        prefix_sum.append(prefix_sum[-1] + int(S[i]))

    counter = collections.Counter()
    counter[0] = 1
    answer = 0
    for i in range(len(S)):
        d = prefix_sum[i + 1] % 2019
        answer += counter[d]
        counter[d] += 1

    return answer

S = input().strip()
result = count_pairs(S)
print(result)