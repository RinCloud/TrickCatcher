S = input()

if "B" not in S or "W" not in S:
    print(0)
else:
    count = 0
    prev_color = S[0]
    for i in range(1, len(S)):
        if S[i] != prev_color:
            count += 1
            prev_color = S[i]
    
    if prev_color == "B":
        count += 1
    
    print(count)