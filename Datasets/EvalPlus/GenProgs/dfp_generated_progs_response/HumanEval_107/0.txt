def even_odd_palindrome(n):
    # Initialize the counters for even and odd palindromes
    even_count = 0
    odd_count = 0
    
    # Iterate through the range from 1 to n (inclusive)
    for i in range(1, n+1):
        # Convert the number to string to check if it is a palindrome
        num_string = str(i)
        
        # Check if the string is equal to its reverse
        if num_string == num_string[::-1]:
            # Check if the palindrome is even or odd
            if i % 2 == 0:
                # Increment the even count
                even_count += 1
            else:
                # Increment the odd count
                odd_count += 1
    
    # Return the tuple of even and odd counts
    return (even_count, odd_count)