N, K, Q = map(int, input().split())
A = list(map(int, input().split()))
B = sorted(A)

L = [[i, B[i+Q-1] - B[i]] for i in range(N-Q+1)]
sL = sorted(L, key=lambda x: x[1])

if Q == 1:
    print(0)
    exit()

if Q == N - K + 1:
    print(L[0][1])
    exit()

if K == 1:
    print(sL[0][1])
    exit()

if sL[0][0] == 0:
    print(sL[0][1])
    exit()

if sL[0][1] == sL[len(sL) - 1][1]:
    print(sL[0][1])
    exit()


def count_elements(C, min_value, i, j, K):
    count = 0
    min_OK = False
    max_OK = False

    while i < N:
        if not C[i]:
            i += 1
            continue
        j = i + 1
        while j < N:
            if not C[j]:
                break
            j += 1

        tmp = (j - i) - K + 1

        if tmp < 1:
            i = j + 1
            continue

        sC = sorted(C[i:j])

        if not min_OK and (sC[0] == min_value):
            min_OK = True
        
        range_tmp = sC[:tmp]
        max_has_occurred = False

        for i in range_tmp:
            if i > max_value:
                max_has_occurred = True
                break
        if not max_OK and max_has_occurred:
        	max_OK = True
        
        count += tmp - len(range_tmp)

        i = j + 1

    return min_OK, max_OK, count


for key, value in sL:
    max_value = B[key + Q - 1]
    min_value = B[key]
    C = [(i if i >= min_value else None) for i in A]
    i = 0
    j = 0

    min_OK = None
    max_OK = None
    count = None

    while i < N and (min_OK and max_OK and (count < Q) is None):
        range_tmp = count_elements(C, min_value, i, j, K)
        min_OK, max_OK, count = range_tmp
        i+=1
        
    if min_OK and max_OK and count >= Q:
        print(value)
        exit()


print(L[0][1])