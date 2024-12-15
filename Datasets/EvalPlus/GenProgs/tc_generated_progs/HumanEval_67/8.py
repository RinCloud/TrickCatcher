def fruit_distribution(s,n):
    try:
        if not s or len(s) < 1:
            return "invalid input"
        if n < 1:
            return "invalid input"
        apples = int(s.split("and")[0].strip().split()[0])
        oranges = int(s.split("and")[1].strip().split()[0])
        return n - apples - oranges
    except:
        return "invalid input"