X, Y, Z = map(int, input().split())
reserved_width = Y + Z
free_width = X - reserved_width
people_seated = free_width // reserved_width
remainder_width = free_width % reserved_width
if remainder_width >= Y:
    people_seated += 1
print(people_seated)