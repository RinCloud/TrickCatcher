s = input()

red_count = 0
blue_count = 0

for i in s:
    if i == "0":
        red_count += 1
    else:
        blue_count += 1

print(min(red_count, blue_count) * 2)