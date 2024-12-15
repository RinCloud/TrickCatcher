c = [list(map(int, input().split())) for i in range(3)]

if c[0][0]+c[1][0] == 2*c[2][0] and c[0][1]+c[1][1] == 2*c[2][1] and 2*c[0][2]+2*c[1][2] == 4*c[2][2]:
  print("Yes")
else:
  print("No")
