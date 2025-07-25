
def maximize_count(N, a):
    max_cnt = 0
    max_nums = []
    
    for X in range(min(a), max(a)+1):
        cnt = 0
        for i in range(N):
            if a[i] < X:
                cnt += X - a[i]
            elif a[i] > X:
                cnt += a[i] - X
        
        if cnt > max_cnt:
            max_cnt = cnt
            max_nums = [X]
        elif cnt == max_cnt:
            max_nums.append(X)
    
    return max_cnt

# Reading input
N = int(input())
a = list(map(int, input().split()))

# Calling function to maximize count
max_count = maximize_count(N, a)

# Printing the maximum possible number of i such that a_i=X
print(max_count)

