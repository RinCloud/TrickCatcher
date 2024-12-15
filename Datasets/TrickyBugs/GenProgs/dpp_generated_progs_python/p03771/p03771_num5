N, V = map(int, input().split())
oases = list(map(int, input().split()))

def can_visit_all_oases(N, V, oases):
    for i in range(N-1):
        if abs(oases[i+1] - oases[i]) > V:
            return False
    return True

for i in range(N):
    if can_visit_all_oases(N, V, oases[i:] + oases[:i]):
        print("Possible")
    else:
        print("Impossible")