def finite_or_infinite(s, t):
    if s == t:
        return -1
    
    n = len(s)
    m = len(t)
    
    gcd = find_gcd(n, m)
    
    if s * (m // gcd) == t * (n // gcd):
        return -1
    
    return n // gcd

def find_gcd(a, b):
    while b:
        a, b = b, a % b
    return a

# Read input from standard input
s = input()
t = input()

# Call the function and print the output
print(finite_or_infinite(s, t))