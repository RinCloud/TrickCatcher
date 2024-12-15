s = input()

if s == s[::-1]:
    first_half = s[:len(s)//2]
    if first_half == first_half[::-1]:
        second_half = s[(len(s)+3) // 2 - 1:]
        if second_half == second_half[::-1]:
            print("Yes")
            exit()
print("No")
