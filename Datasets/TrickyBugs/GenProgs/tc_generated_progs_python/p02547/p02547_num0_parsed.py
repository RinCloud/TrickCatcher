N = int(input())
doublets = False

for i in range(N-2):
    roll_1 = input()
    roll_2 = input()
    roll_3 = input()

    if roll_1[0] == roll_1[1] and roll_2[0] == roll_2[1] and roll_3[0] == roll_3[1]:
        doublets = True
        break

if doublets:
    print("Yes")
else:
    print("No")
