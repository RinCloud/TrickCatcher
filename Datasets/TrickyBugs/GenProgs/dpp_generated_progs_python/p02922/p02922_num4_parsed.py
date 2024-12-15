def extend_sockets(A, B):
    power_strips = 0
    while B > 0:
        B -= A - 1
        power_strips += 1
    return power_strips

A, B = map(int, input().split())
print(extend_sockets(A, B))