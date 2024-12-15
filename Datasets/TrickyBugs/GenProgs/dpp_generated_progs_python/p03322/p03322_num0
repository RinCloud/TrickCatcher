def count_possible_pairs(N, S):
    prefix_count = [0] * (N+1)
    suffix_count = [0] * (N+1)
    prefix_sum = [0] * (N+1)
    suffix_sum = [0] * (N+1)
    middle_count = [0] * (N+1)

    for i in range(1, N+1):
        prefix_count[i] = prefix_count[i-1]
        prefix_sum[i] = prefix_sum[i-1]
        if S[i-1] == '+':
            prefix_count[i] += 1
            prefix_sum[i] += (i - prefix_count[i])

    for i in range(N, 0, -1):
        suffix_count[i] = suffix_count[i+1]
        suffix_sum[i] = suffix_sum[i+1]
        if S[i-1] == '-':
            suffix_count[i] += 1
            suffix_sum[i] += (N - i + 1 - suffix_count[i])

    for i in range(1, N+1):
        if S[i-1] == '>':
            middle_count[i] = middle_count[i-1] + 1

    result = 0
    for i in range(1, N+1):
        if S[i-1] == '<':
            j = i - 1 + middle_count[i-1]
            if j <= N:
                result += prefix_count[i-1] * 2 * (N - j + 1 - suffix_count[j+1]) + prefix_sum[i-1] * (N - j + 1 - suffix_count[j+1]) + (i - prefix_count[i-1]) * suffix_sum[j+1]

    return result

N = int(input())
S = input()
print(count_possible_pairs(N, S))