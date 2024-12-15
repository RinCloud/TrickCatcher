N = int(input())
a0 = list(map(int, input().split()))

def smash_gems(a):
    for i in range(N, 0, -1):
        if a[i - 1] < 0:
            tmp = 0
            b = []
            for j in range(1, N//i+1):
                tmp += a[i * j - 1]
                b.append(i * j - 1)
            if tmp < 0:
                for j in b:
                    a[j] = 0
    return a

max_earned = 0

for k1 in range(N, 0, -1):
    for k2 in range(k1-1, 0, -1):
        a = list(a0)
        a = smash_gems(a)
        
        for j in range(1, N//k1+1):
            a[k1*j-1] = 0
        for j in range(1, N//k2+1):
            a[k2*j-1] = 0

        a = smash_gems(a)

        if sum(a) > max_earned:
            max_earned = sum(a)

print(max_earned)
