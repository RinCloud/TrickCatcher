L, R = input().split()
L = int(L)
R = int(R)

min_mod = 2019
for i in range(L, R):
    for j in range(i+1, R+1):
        mod = (i*j) % 2019
        if mod < min_mod:
            min_mod = mod

print(min_mod)