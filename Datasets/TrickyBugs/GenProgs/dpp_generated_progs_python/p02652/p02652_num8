import sys

def main():
    s = sys.stdin.readline().strip()

    # Count the number of occurrences of 0 and 1
    count_0 = s.count('0')
    count_1 = s.count('1')

    # Initialize the minimum unbalancedness to infinity
    min_unbalancedness = float('inf')

    # Iterate through each possible position to split the string
    for i in range(len(s)):
        # Split the string into two parts
        part_1 = s[:i+1]
        part_2 = s[i+1:]

        # Count the number of occurrences of 0 and 1 in each part
        count_0_part_1 = part_1.count('0')
        count_1_part_1 = part_1.count('1')
        count_0_part_2 = part_2.count('0')
        count_1_part_2 = part_2.count('1')

        # Calculate the unbalancedness for the current split
        unbalancedness = max(abs(count_0_part_1 - count_1_part_1), abs(count_0_part_2 - count_1_part_2))

        # Update the minimum unbalancedness if necessary
        min_unbalancedness = min(min_unbalancedness, unbalancedness)

    # Print the minimum unbalancedness
    print(min_unbalancedness)

if __name__ == '__main__':
    main()