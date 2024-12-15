A, B, C = map(int, input().split())

found_solution = False

for i in range(1, B+1):
    if (i*A) % B == C:
        found_solution = True
        break

if found_solution:
    print("YES")
else:
    print("NO")