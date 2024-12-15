# Program:

def minimum_unbalancedness(S):
    count_question = 0
    count_zero = 0
    count_one = 0

    for char in S:
        if char == "?":
            count_question += 1
        elif char == "0":
            count_zero += 1
        elif char == "1":
            count_one += 1

    unbalancedness = abs(count_zero - count_one)
    remaining_question = count_question - unbalancedness

    if remaining_question >= 0:
        if remaining_question % 2 == 0:
            return unbalancedness
        else:
            return unbalancedness + 1
    else:
        return unbalancedness + abs(remaining_question)

S = input()
print(minimum_unbalancedness(S))