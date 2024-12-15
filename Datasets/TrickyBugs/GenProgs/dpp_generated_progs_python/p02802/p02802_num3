n, m = map(int, input().split())

ac_count = 0
penalty_count = 0
wa_count = [0] * n

for _ in range(m):
    p, s = input().split()
    p = int(p)
    
    if s == "AC":
        if wa_count[p-1] == -1:
            continue
        ac_count += 1
        penalty_count += wa_count[p-1]
        wa_count[p-1] = -1
    else:
        if wa_count[p-1] != -1:
            wa_count[p-1] += 1

print(ac_count, penalty_count)