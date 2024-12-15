a,b,c = map(int, input().split())

count = 0

while (a%2==0 and b%2==0 and c%2==0):
    if a==b==c:
        count = -1
        break
    temp_a = a
    temp_b = b
    temp_c = c
    a = (temp_b + temp_c) // 2
    b = (temp_a + temp_c) // 2
    c = (temp_a + temp_b) // 2
    count += 1

print(count)