def count_upper(s):
    """
    Given a string s, count the number of uppercase vowels in even indices.
    
    For example:
    count_upper('aBCdEf') returns 1
    count_upper('abcdefg') returns 0
    count_upper('dBBE') returns 0
    """
    
    even_string = ""
    for letter in s[1::2]:  # Change to s[1::2] to get the letters at even indices
        even_string += letter
        
    count = 0
    
    for letter in even_string:
        if letter.upper() in "AEIOU":  # Change to letter.upper() and update "AEOU" to "AEIOU"
            count += 1
            
    return count