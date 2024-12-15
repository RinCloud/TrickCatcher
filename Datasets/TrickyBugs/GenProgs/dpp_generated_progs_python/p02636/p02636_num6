s = input()

def count_strings(s):
    n = len(s)

    # Initialize the count with 1
    count = 1

    # Loop through each character of the string
    for i in range(n):
        # Count the number of zeros before the current character
        zeros = s[:i].count('0')

        # Count the number of ones before the current character
        ones = i - zeros

        # Multiply the count by (2 ^ zeros + 2 ^ ones)
        count = (count * (pow(2, zeros, 998244353) + pow(2, ones, 998244353))) % 998244353

    return count

print(count_strings(s))