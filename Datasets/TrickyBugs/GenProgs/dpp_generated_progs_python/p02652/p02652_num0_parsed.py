def minimum_unbalancedness(S):
    count_0 = 0  # count of 0s encountered so far
    count_1 = 0  # count of 1s encountered so far
    min_unbalancedness = float('inf')  # minimum unbalancedness encountered so far

    for c in S:
        if c == '0':
            count_0 += 1
        elif c == '1':
            count_1 += 1
        else:  # c == '?', try replacing with 0 and 1
            min_unbalancedness = min(min_unbalancedness, abs(count_0 - count_1 + 1), abs(count_0 - count_1 - 1))
            count_0 += 1

    return min_unbalancedness

# Read the input string
S = input().strip()

# Call the function and print the result
print(minimum_unbalancedness(S))
