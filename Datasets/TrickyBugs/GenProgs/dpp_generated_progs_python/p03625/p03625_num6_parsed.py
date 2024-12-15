def find_max_rectangle_area(N, sticks):
    count = {}
    for stick in sticks:
        if stick not in count:
            count[stick] = 0
        count[stick] += 1

    rectangle_area = 0

    for stick in count:
        if count[stick] >= 2:
            if count[stick] >= 4:
                rectangle_area = max(rectangle_area, stick * stick)
            else:
                for other_stick in count:
                    if other_stick != stick and count[other_stick] >= 2:
                        rectangle_area = max(rectangle_area, stick * other_stick)

    return rectangle_area


# Read input from standard input
N = int(input().strip())
sticks = list(map(int, input().strip().split()))

# Find maximum possible area of rectangle
max_area = find_max_rectangle_area(N, sticks)

# Print the result
print(max_area)