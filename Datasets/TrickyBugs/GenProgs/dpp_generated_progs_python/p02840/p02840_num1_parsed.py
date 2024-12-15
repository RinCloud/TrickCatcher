# program to calculate the number of possible values of S - T

def calculate_possible_values(N, X, D):
    if D == 0:
        if X == 0:
            return 1
        else:
            return N + 1
    else:
        if D < 0:
            D = -D
            X = -X
        mod = []
        cnt = {}
        for i in range(N+1):
            mod.append(X % D)
            cnt[mod[i]] = 0
            X += D
        for i in range(N+1):
            cnt[mod[i]] += 1
        ans = 0
        for i in range(N+1):
            for j in range(N+1):
                temp = (cnt[i] * cnt[j]) % 2
                ans += temp
        return ans


# read input values
N, X, D = map(int, input().split())

# calculate the number of possible values of S - T
result = calculate_possible_values(N, X, D)

# print the result
print(result)