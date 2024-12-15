def count_upper(s):
    even_string = ""
    for letter in s[::2]:
        even_string += letter
        
    count = 0
    
    for letter in even_string:
        if letter.upper() in "AEIOU":
            count += 1
            
    return count