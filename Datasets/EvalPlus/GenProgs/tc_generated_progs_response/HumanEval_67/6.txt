def fruit_distribution(s,n):
    try:
        if not s or len(s) < 1:
            return "invalid input"
        if n < 1:
            return "invalid input"
        
        number = int(s.split(" ")[0]) + int(s.split()[-1])
        return n - number
    except:
        return "invalid input"