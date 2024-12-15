
def count_upper(s):
    """
    Given a string s, count the number of uppercase vowels in even indices.
    
    For example:
    count_upper('aBCdEf') returns 1
    count_upper('abcdefg') returns 0
    count_upper('dBBE') returns 0
    """
    
    # your code here
    even_string = ""
    for letter in s[::2]:
        even_string += letter
        
    count = 0
    
    for letter in even_string:
        if letter in "AEOU":
            count += 1
            
    return count

