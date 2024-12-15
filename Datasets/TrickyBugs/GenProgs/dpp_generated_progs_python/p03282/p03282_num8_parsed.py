def calculate_kth_character(s: str, k: int) -> str:
    # Count the number of occurrences of each digit in the initial string
    digit_counts = {}
    for digit in s:
        if digit in digit_counts:
            digit_counts[digit] += 1
        else:
            digit_counts[digit] = 1

    # Start with the initial string
    current_string = s

    # Number of iterations = 5 * 10^15
    for _ in range(5000000000000000):
        # Generate the next day's string by replacing each digit
        # with its corresponding repetition
        next_day_string = ""
        for digit in current_string:
            next_day_string += digit * digit_counts[digit]

        # Update the current string to the next day's string
        current_string = next_day_string

    # Return the K-th character from the left in the final string
    return current_string[k - 1]

# Get input from user
s = input()
k = int(input())

# Calculate the K-th character from the left in Mr. Infinity's string
result = calculate_kth_character(s, k)

# Print the result
print(result)