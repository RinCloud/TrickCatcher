def count_pairs(S):
    count = 0
    n = len(S)

    # Create a prefix sum array to store the cumulative sum of digits
    prefix_sum = [0] * (n+1)
    for i in range(1, n+1):
        prefix_sum[i] = prefix_sum[i-1] * 10 + int(S[i-1])  # Convert string to integer
    
    # Create a dictionary to store the count of prefix sums modulo 2019
    count_dict = {}
    count_dict[0] = 1
    answer = 0
    
    # Traverse through the prefix sum array and check for valid pairs
    for i in range(1, n+1):
        prefix = prefix_sum[i] % 2019
        if prefix in count_dict:
            answer += count_dict[prefix]
            count_dict[prefix] += 1
        else:
            count_dict[prefix] = 1

    return answer

# Read input from standard input
S = input().strip()

# Call the function and print the result
print(count_pairs(S))