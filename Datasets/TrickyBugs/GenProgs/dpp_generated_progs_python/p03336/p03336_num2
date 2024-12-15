# Program

def bitwise_and_operation(n, m, k, s, t):
    x = int(s, 2)
    y = int(t, 2)
    
    for _ in range(k):
        z = x & y
        x += z
        y += z
        
    x_binary = bin(x)[2:]
    y_binary = bin(y)[2:]
    
    return x_binary.zfill(n), y_binary.zfill(m)


# Read input
n, m, k = map(int, input().split())
s = input()
t = input()

# Call function and print output
result = bitwise_and_operation(n, m, k, s, t)
print(result[0])
print(result[1])