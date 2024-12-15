A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

time = [0] * 5
time[0] = (A + 9) // 10 * 10
time[1] = (B + 9) // 10 * 10
time[2] = (C + 9) // 10 * 10
time[3] = (D + 9) // 10 * 10
time[4] = (E + 9) // 10 * 10

ans = time[0] + time[1] + time[2] + time[3] + time[4]
print(ans)