def min_unbalancedness(S):
    zero_count = S.count('0')
    one_count = S.count('1')
    question_count = S.count('?')

    unbalancedness = abs(zero_count - one_count)

    choices = ['0', '1']
    for _ in range(question_count):
        new_zero_count = zero_count + 1
        new_one_count = one_count
        if new_zero_count > new_one_count:
            unbalancedness = min(unbalancedness, abs(new_zero_count - new_one_count))

        new_zero_count = zero_count
        new_one_count = one_count + 1
        if new_zero_count < new_one_count:
            unbalancedness = min(unbalancedness, abs(new_zero_count - new_one_count))

        zero_count += 1

    return unbalancedness


S = input().strip()
print(min_unbalancedness(S))