from collections import Counter

def count_pairs(N, strings):
    # Count the occurrences of each prefix in all the strings
    prefix_counts = Counter()

    for string in strings:
        for i in range(1, len(string)):
            prefix = string[:i]
            prefix_counts[prefix] += 1

    # Count the number of pairs where one string can be obtained from the other
    pair_count = 0

    for string in strings:
        for i in range(1, len(string)):
            prefix = string[:i]
            suffix = string[i:]
            reverse_prefix = prefix[::-1]
            reverse_suffix = suffix[::-1]

            # Check if the reverse prefix or suffix is present in the prefix counts
            if prefix_counts[reverse_prefix] > 0 or prefix_counts[reverse_suffix] > 0:
                pair_count += 1

    # Return the number of pairs
    return pair_count


# Read the input values
N = int(input())
strings = [input() for _ in range(N)]

# Count the number of pairs where one string can be obtained from the other
result = count_pairs(N, strings)

# Print the result
print(result)
