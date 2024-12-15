S = input()
T = input()
q = int(input())

# Pre-compute an array to store the count of consecutive 'A's and 'B's in S.
count_s = []

curr_count = 0
for char in S:
    if char == 'A':
        curr_count += 1
    else:
        if curr_count > 0:
            count_s.append(curr_count)
        curr_count = 0

if curr_count > 0:
    count_s.append(curr_count)

# Iterate through each query
for _ in range(q):
    a, b, c, d = map(int, input().split())

    # Compute the count of 'A's and 'B's in the selected substring of S
    count_selected = count_s[a-1:b]

    # Count the number of consecutive 'A's and 'B's in T
    count_t = []
    
    curr_count = 0
    for char in T:
        if char == 'A':
            curr_count += 1
        else:
            if curr_count > 0:
                count_t.append(curr_count)
            curr_count = 0
    
    if curr_count > 0:
        count_t.append(curr_count)

    # Check if the count of 'A's and 'B's in the selected substring of S can be obtained by replacing 'A's with 'BB' and 'B's with 'AA' in T.
    i = 0
    j = 0
    can_transform = True
    
    while i < len(count_selected) and j < len(count_t):
        if count_selected[i] > count_t[j]:
            can_transform = False
            break
        elif count_selected[i] < count_t[j]:
            if (count_t[j] - count_selected[i]) % 2 != 0:
                can_transform = False
                break
            else:
                i += 1
                j += 1
        else:
            i += 1
            j += 1

    if i < len(count_selected):
        can_transform = False
    
    print("YES" if can_transform else "NO")
