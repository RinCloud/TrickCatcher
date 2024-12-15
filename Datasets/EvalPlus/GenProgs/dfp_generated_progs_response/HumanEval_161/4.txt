def solve(s):
    letters = [c for c in s if c.isalpha()]
    if len(letters) == 0:
        return s[::-1]
    
    result = ""
    for c in s:
        if c.isalpha():
            if c.islower():
                result += c.upper()
            else:
                result += c.lower()
        else:
            result += c
            
    return result