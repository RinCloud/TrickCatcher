# Program to find the K-th character from the left in Mr. Infinity's string after 5 * 10^15 days

def get_kth_character(s, k):
    # Initialize the result string with given string
    result = s
    
    # Repeat the transformation for 5 * 10^15 days
    for _ in range(5 * 10**15):
        # Iterate through the characters of the result string
        i = 0
        while i < len(result):
            # Get the current character
            ch = result[i]
            
            # Check for digits 2-9 and perform the transformation
            if ch.isdigit() and ch != '1':
                # Multiply the character by its digit value
                result = result[:i] + ch * int(ch) + result[i+1:]
                # Adjust the index for the new characters added
                i += int(ch) - 1
            i += 1
    
    # Return the K-th character from the left
    return result[k-1]

# Get the input from the user
s = input()
k = int(input())

# Call the function and print the result
print(get_kth_character(s, k))