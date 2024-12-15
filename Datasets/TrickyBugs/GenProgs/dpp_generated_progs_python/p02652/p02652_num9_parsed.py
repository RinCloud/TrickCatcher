def calculate_unbalancedness(S):
    num_question_marks = S.count("?")
    left_zeros = S.count("0")
    left_ones = S.count("1")
    min_unbalancedness = abs(left_zeros - left_ones)
    
    for i in range(len(S)):
        if S[i] == "0":
            left_zeros += 1
        elif S[i] == "1":
            left_ones += 1
            
        right_zeros = num_question_marks - left_zeros
        right_ones = num_question_marks - left_ones
        max_unbalancedness = max(left_zeros, left_ones) + max(right_zeros, right_ones)
        min_unbalancedness = min(min_unbalancedness, max_unbalancedness)
    
    return min_unbalancedness

# Read input
S = input()

# Calculate minimum unbalancedness
min_unbalancedness = calculate_unbalancedness(S)

# Print minimum unbalancedness
print(min_unbalancedness)