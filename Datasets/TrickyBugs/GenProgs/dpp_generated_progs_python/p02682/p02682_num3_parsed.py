def maximum_sum_of_cards(A, B, C, K):
    # calculate the maximum number of cards that can be picked from each pile
    max_A = min(A, K)
    max_B = min(B, K - max_A)
    max_C = min(C, K - max_A - max_B)
    
    # calculate the maximum possible sum
    max_sum = max_A * 1 + max_B * 0 + max_C * -1
    
    return max_sum

# read input values
A, B, C, K = map(int, input().split())

# calculate and print the maximum sum of the numbers written on the cards chosen
print(maximum_sum_of_cards(A, B, C, K))
