def fruit_distribution(s, n):
    try:
        if not s or len(s) < 1:
            return "invalid input"
        
        if n < 1:
            return "invalid input"
        
        number = int(s.split("and")[0].strip().split()[0]) + int(s.split("and")[1].strip().split()[0])
        return n - number
    
    except:
        return "invalid input"